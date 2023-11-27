#include <map>

using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) {
        return result;
    }
    string letter;
    for (int i = 0; i < test.length(); i++) {
        if (test[i] != ' ') {
            letter += test[i];
        } else {
            if (!letter.empty()) {
                result[letter]++;
                letter = "";
            }
        }
    }
    if (!letter.empty()) {
        result[letter]++;
    }
    return result;
}

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

int main() {
    /*map<char, int> a = histogram("hello world");
    map<char, int> b = histogram("world hello");
    map<char, int> c = histogram("hello hello");
    
    cout << issame(a, b) << endl; // should output 1
    cout << issame(a, c) << endl; // should output 0*/
    
    return 0;
}