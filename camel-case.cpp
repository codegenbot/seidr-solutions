Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(const string& str) {
    string result;
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find('-', start);
        if (end == string::npos) {
            // last part, convert to camelCase and return
            string part = str.substr(start);
            for (size_t i = 1; i < part.length(); ++i) {
                result += toupper(part[i]);
            }
            return result + part[0];
        }
        
        size_t len = end - start;
        if (len > 0) {
            // not the first part, convert to camelCase and add
            string part = str.substr(start, len);
            for (size_t i = 1; i < part.length(); ++i) {
                result += toupper(part[i]);
            }
            result += part[0];
        }
        
        start = end + 1;
    }
    
    return str; // nothing to convert
}

int main() {
    cout << kebabToCamel("nospaceordash") << endl;
    cout << kebabToCamel("two-words") << endl;
    cout << kebabToCamel("two words") << endl;
    cout << kebabToCamel("all separate words") << endl;
    
    return 0;
}