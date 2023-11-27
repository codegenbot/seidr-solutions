#include <map>

map<char, int> histogram(string test);
bool issame(map<char, int> a, map<char, int> b);

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
    // Test cases
    map<char, int> a = histogram("hello world");
    map<char, int> b = histogram("world hello");
    map<char, int> c = histogram("hello  world");
    map<char, int> d = histogram("");
    
    /* Uncomment to test
    cout << issame(a, b) << endl;  // 1
    cout << issame(a, c) << endl;  // 0
    cout << issame(a, d) << endl;  // 0
    cout << issame(d, d) << endl;  // 1
    */
    
    return 0;
}