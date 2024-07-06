#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> words = {"apple", "apricot", "banana", "apricot"};
    string prefix = "api";
    
    // Testing the function
    vector<string> filtered_words = filter_by_prefix(words, prefix);
    
    if (issame(filtered_words, vector<string>({"api", "apricot"}))) {
        cout << "Test passed. Words filtered correctly." << endl;
    } else {
        cout << "Test failed. Words not filtered correctly." << endl;
    }
    
    return 0;
}