#include <map>

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
    /* Uncomment the test cases below */
    
    // Test case 1
    map<char, int> result1 = histogram("hello world");
    map<char, int> expected1 = {
        {'h', 1},
        {'e', 1},
        {'l', 3},
        {'o', 2},
        {'w', 1},
        {'r', 1},
        {'d', 1}
    };
    //std::cout << "Test case 1: " << (issame(result1, expected1) ? "PASSED" : "FAILED") << std::endl;
    
    // Test case 2
    map<char, int> result2 = histogram("cpp is awesome");
    map<char, int> expected2 = {
        {'c', 1},
        {'p', 2},
        {'i', 1},
        {'s', 2},
        {'a', 1},
        {'w', 1},
        {'e', 2},
        {'o', 1},
        {'m', 1}
    };
    //std::cout << "Test case 2: " << (issame(result2, expected2) ? "PASSED" : "FAILED") << std::endl;
    
    return 0;
}