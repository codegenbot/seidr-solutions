#include <vector>
#include <iostream>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> select_words(string s, int n);

int main() {
    // Test the select_words function
    vector<string> result = select_words("Hello World, this is a test", 2);
    vector<string> expected = {"Hello", "World,", "this", "test"};
    
    if (issame(result, expected)) {
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }
    
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int count = 0;

    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                count++;
            }
            word += c;
        }
    }

    if (count == n) {
        result.push_back(word);
    }

    return result;
}