#include<iostream>
#include<map>
#include<string>
#include<cassert>

using namespace std;

map<char, int> histogram(string test) {
map<char, int> result;
if (test.empty()) {
return result;
}
string letter;
for (char c : test) {
if (c == ' ') {
result[letter]++;
letter = "";
} else {
letter += c;
}
}
result[letter]++;
return result;
}

bool issame(map<char, int> a, map<char, int> b) {
return a == b;
}

int main() {
assert(issame(histogram("a"), {{'a', 1}}));
assert(issame(histogram("hello world"), {{'hello', 1}, {'world', 1}}));

cout << "All tests passed!" << endl;

return 0;
}