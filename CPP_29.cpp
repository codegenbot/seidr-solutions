```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of words: ";
    std::cin >> n;

    vector<string> words(n);
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter word " << (i+1) << ": ";
        std::cin >> words[i];
    }

    string prefix;
    std::cout << "Enter a prefix: ";
    std::cin >> prefix;

    vector<string> filtered = filter_by_prefix(words, prefix);

    if(filtered.empty()) {
        cout << "No words found with the given prefix." << endl;
    } else if(issame(words, filtered)) {
        cout << "All words in the list have the given prefix." << endl;
    } else {
        cout << "Not all words in the list have the given prefix." << endl;
    }

    return 0;
}