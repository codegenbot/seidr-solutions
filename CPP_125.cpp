#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') == string::npos)
                return {to_string(count(txt.begin(), txt.end(), tolower))};
            pos++;
        }
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }
    
    result.push_back(txt.substr(prev_pos));
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    vector<string> res = split_words(str);
    for (auto &s : res) {
        cout << s << endl;
    }
    return 0;
}