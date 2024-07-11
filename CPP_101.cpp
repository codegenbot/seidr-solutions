// Modified code
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

vector<string> words_string(string s){
    vector<string> words;
    stringstream ss(s);
    string word;
    while (getline(ss, word, ' ')) {
        if (!word.empty()) {
            words.push_back(word);
        }
    }
    return words;
}

int main() {
    string input = "Hello world     C++";
    vector<string> result = words_string(input);
    
    assert(result.size() == 3);
    assert(result[0] == "Hello");
    assert(result[1] == "world");
    assert(result[2] == "C++");
    
    cout << "All tests pass!" << endl;
    
    return 0;
}