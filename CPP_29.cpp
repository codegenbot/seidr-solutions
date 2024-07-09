```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
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
    std::vector<std::string> words = {"apple", "banana", "cherry"};
    std::string prefix = "ap";
    std::vector<std::string> filteredWords = filter_by_prefix(words, prefix);

    for (const auto& word : filteredWords) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}