#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    vector<string> words = split(input, '-');
    for (int i = 0; i < words.size(); i++) {
        if (words[i].empty()) continue;
        words[i][0] = toupper(words[i][0]);
    }
    
    string output = join(words, "");
    cout << output << endl;
    
    return 0;
}
