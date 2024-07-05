#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    string delimiter = " ";

    while ((pos = txt.find(delimiter)) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + delimiter.length());
    }
    result.push_back(txt);

    return result;
}

int main() {
    cout << "Testing split_words function:\n";
    auto result1 = split_words("");
    auto result2 = split_words("hello world");
    auto result3 = split_words("a,b,c");
    
    for (const auto& word : result1) cout << word << "\n";
    for (const auto& word : result2) cout << word << "\n";
    for (const auto& word : result3) cout << word << "\n";
    
    return 0;
}