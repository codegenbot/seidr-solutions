# include <iostream>
# include <vector>
# include <sstream>
using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    stringstream ss(s);
    while (ss >> word) {
        words.push_back(word);
        if (words.size() == n) {
            break;
        }
    }
    return words;
}

int main() {
    vector<string> result = select_words("Hello, world! Welcome to the code contest.", 2);
    
    for (const string& word : result) {
        cout << word << endl;
    }
    
    return 0;
}