#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

bool is_consonant(char c) {
    c = tolower(c);
    return c >= 'a' && c <= 'z' && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int count_consonants(const string &word) {
    int count = 0;
    for(char c : word) {
        if(is_consonant(c)) {
            count++;
        }
    }
    return count;
}

vector<string> select_words(const string &s, int n) {
    vector<string> result;
    istringstream iss(s);
    string word;
    while(iss >> word) {
        if(count_consonants(word) == n) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    string input;
    int n;
    
    getline(cin, input);
    cin >> n;
    
    vector<string> result = select_words(input, n);
    for (const string &word : result) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}