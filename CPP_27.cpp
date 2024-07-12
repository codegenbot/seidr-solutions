```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> swapCase(string str) {
    vector<char> result;
    
    for(size_t i = 0; i < str.size(); i++){
        using std::islower;
        using std::toupper;
        using std::tolower;
        char c = str[i];
        if(islower(c))
            result.push_back(toupper(c));
        else if(isupper(c))
            result.push_back(tolower(c));
        else
            result.push_back(c);
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    cin >> s;
    vector<char> swapped = swapCase(s);
    for(char c : swapped) cout << c;
    cout << endl;
    return 0;
}