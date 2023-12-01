#include <map>
#include <cassert> // Add the missing header file

map<char,int> histogram(string test);

bool isEqual(map<char,int> a, map<char,int> b) { // Rename the function
    return a == b;
}

map<char,int> histogram(string test) { // Add the missing function declaration
    map<char, int> counts;
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            counts[letter]++;
            letter = "";
        }
    }
    if (!letter.empty()) counts[letter]++;
    return counts;
}

int main() {
    assert(isEqual(histogram("a"), {{'a', 1}})); // Update the function call

    return 0;
}