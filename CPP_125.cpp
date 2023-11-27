#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    string word = "";

    for (int i = 0; i < txt.length(); i++) {
        if (txt[i] == ' ') {
            if (word != "") {
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    
    if (word != "") {
        result.push_back(word);
    }
    
    return result;
}

bool are_equal(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    if (are_equal(split_words("") ,{"0"})) {
        cout << "Test case passed!" << endl;
    } else {
        cout << "Test case failed!" << endl;
    }
}