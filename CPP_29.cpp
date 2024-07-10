#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix);

int main() {
    vector<string> words = {"code", "coding", "problem", "contest"};
    string pref = "cod";
    vector<string> filtered = filter_by_prefix(words, pref);
    
    for (const auto& word : filtered) {
        std::cout << word << " ";
    }
    
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}