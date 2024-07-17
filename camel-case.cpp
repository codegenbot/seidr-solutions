Here is the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    
    int start = 0;
    for(int i = 0; i <= input.size(); i++) {
        if(i == input.size() || (input[i] >= 'A' && input[i] <= 'Z' || input[i] >= 'a' && input[i] <= 'z')) {
            string word = input.substr(start, i - start);
            cout << (char)toupper(word[0]);
            for(int j = 1; j < word.size(); j++) {
                cout << tolower(word[j]);
            }
            start = i + 1;
        }
    }
    
    return 0;
}