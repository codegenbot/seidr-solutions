```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> words(n);
    for(int i = 0; i < n; i++) {
        std::cin >> words[i];
    }

    string prefix;
    std::cin >> prefix;

    vector<string> filteredWords = filter_by_prefix(words, prefix);

    if(issame(filteredWords, words)) {
        cout << "No strings match the given prefix." << endl;
    } else {
        for(auto s : filteredWords) {
            cout << s << endl;
        }
    }

    return 0;
}