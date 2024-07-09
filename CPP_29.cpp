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
    vector<string> input;
    std::cout << "Enter the number of words: ";
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        string word;
        std::cout << "Enter a word: ";
        std::cin >> word;
        input.push_back(word);
    }
    
    vector<string> filtered_words = filter_by_prefix(input, "Hello");
    bool is_same = issame(filtered_words, {"Hello", "Hello", "Hello"});
    
    if(is_same) {
        std::cout << "The words are the same.\n";
    } else {
        std::cout << "The words are not the same.\n";
    }
    
    return 0;
}