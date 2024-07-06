```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<const char*> split(const string& str, const string& delimiter) {
    size_t pos = 0;
    vector<const char*> tokens;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(&str[0] + pos);
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(&str[0]);
    return tokens;
}

string anti_shuffle(string s){
    if(s.empty())
        return "";
    string result = "";
    for (const auto& word : split(s, " ")) {
        result += string(word) + " ";
    }
    return result.substr(0, result.size() - 1);
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "Anti-Shuffle of input sentence is: " << anti_shuffle(s) << endl;
}