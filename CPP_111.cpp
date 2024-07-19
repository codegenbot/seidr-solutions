```cpp
#include <map>
#include <string>
#include <algorithm>
#include <initializer_list>
using namespace std;

std::map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : unique(letters.begin(), letters.end())) {
        int count = 0;
        for (char letter : letters) {
            if (letter == c) count++;
        }
        if (count > 0) result[c] = count;
    }

    return result;
}

int main() {
    cout << (issame(histogram("a"), histogram("b")) ? "True" : "False") << endl;
    return 0;
}

bool issame(const map<char,int>& a, const map<char,int>& b){
    if(a.size() != b.size()) return false;
    for(auto p : a) {
        if(b.find(p.first) == b.end() || b[p.first] != p.second) return false;
    }
    return true;
}