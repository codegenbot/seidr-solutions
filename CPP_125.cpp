#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos;
    
    if ((pos = txt.find(' ')) != string::npos) {
        stringstream ss(txt);
        string word;
        while (ss >> word) {
            result.push_back(word);
        }
    } else if ((pos = txt.find(',')) != string::npos) {
        stringstream ss(txt);
        string word;
        while (getline(ss, word, ',')) {
            result.push_back(word);
        }
    } else {
        int odd_count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                int order = c - 'a';
                if (order % 2 == 0) {
                    odd_count++;
                }
            }
        }
        result.push_back(to_string(odd_count));
    }
    
    return result;
}