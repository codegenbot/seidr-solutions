#include <sstream>

#include <vector>
#include <iostream>
#include <string>
using namespace std;

std::string camelCase(string str) {
    vector<string> words;
    stringstream ss(str);
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    for(int i = 0; i < words.size(); i++) {
        if(i > 0)
            transform(words[i].begin(), words[i].end(), words[i].begin(), ::toupper);
    }

    string result;
    for(int i = 0; i < words.size(); i++) {
        if(i == 0) 
            result += words[i];
        else 
            result += capitalize(words[i]);
    }

    return result;
}

string capitalize(string str) {
    if(str.empty()) 
        return str;

    string result = "";
    result += ::toupper(str[0]);

    for(int i = 1; i < str.length(); i++) 
        result += ::tolower(str[i]);

    return result;
}

int main() {
    cout << camelCase("nospaceordash") << endl;
    cout << camelCase("two-words") << endl;
    cout << camelCase("two words") << endl;
    cout << camelCase("all separate words") << endl;

    return 0;
}