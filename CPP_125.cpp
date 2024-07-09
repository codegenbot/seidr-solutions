#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    
    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') == string::npos) {
                int count = 0;
                for (char c : txt) {
                    if (c >= 'a' && c <= 'z') {
                        if ((int)c % 2 != 0) {
                            count++;
                        }
                    }
                }
                result.push_back(to_string(count));
                return result;
            }
        }
        
        size_t nextPos = txt.find_first_of(" ,", pos + 1);
        string token = txt.substr(pos, nextPos - pos);
        if (!token.empty()) {
            result.push_back(token);
        }
        pos = nextPos;
    }

    if (pos < txt.size()) {
        string token = txt.substr(pos);
        if (!token.empty()) {
            result.push_back(token);
        }
    }

    return result;
}

int main() {
    // Test your function here
    return 0;
}