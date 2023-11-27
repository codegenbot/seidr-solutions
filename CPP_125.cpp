#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ' && word != "") {
            result.push_back(word);
            word = "";
        }
        else {
            word += txt[i];
        }
    }
    
    if (word != "") {
        result.push_back(word);
    }
    
    return result;
}

// int main() {
//     assert(split_words("").size() == 1);
//     cout << "Test case passed!" << endl;
//     return 0;
// }