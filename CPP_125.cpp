#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    
    // Handle spaces
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    
    // If no spaces but contains commas, handle commas
    if (result.empty()) {
        while ((pos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
        }
    }

    // Add remaining part or count odd-indexed lowercase letters
    if (!txt.empty()) {
        result.push_back(txt);
    } else if (result.empty()) {
        int odd_count = 0;
        for (char c : txt) {
            if (islower(c) && (c - 'a') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("Hello World"), {"Hello", "World"}));
    assert(issame(split_words("One,Two,Three"), {"One", "Two", "Three"}));
    assert(issame(split_words("abc"), {"1"}));
    cout << "All tests passed!" << endl;
    return 0;
}