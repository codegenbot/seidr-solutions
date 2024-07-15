#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(const string& str) {
    string result = "";
    int start = 0;
    
    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            
            if (!result.empty()) {
                result += char(toupper(word[0]));
                result.erase(1, 1);
            } else {
                result += word;
            }
            
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    string str;
    
    while (true) {
        cout << "Enter a kebab-case string (or 'quit' to exit): ";
        cin >> str;
        
        if (str == "quit") break;
        
        cout << "CamelCase: " << kebabToCamel(str) << endl;
    }
    
    return 0;
}