#include <iostream>
#include <string>

using namespace std;

bool cycpattern_check(string a, string b) {
    if (a.length() < b.length()) {
        return false;
    }
    
    string temp = b + b;
    return temp.find(a) != string::npos;
}

int main() {
    string word1, word2;
    cin >> word1 >> word2;
    
    bool result = cycpattern_check(word1, word2);
    cout << boolalpha << result << endl;
    
    return 0;
}