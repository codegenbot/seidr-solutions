#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    while ((pos = txt.find(' ', prev_pos)) != string::npos) {
        result.push_back(txt.substr(prev_pos, pos - prev_pos));
        prev_pos = pos + 1;
    }
    if (txt.find(',') == string::npos) {
        int odd_count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((int)c % 2 != 0)
                    odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    } else {
        size_t pos = txt.find(',');
        while (pos != string::npos) {
            result.push_back(txt.substr(0, pos));
            txt.erase(0, pos + 1);
            pos = txt.find(',');
        }
        if (!txt.empty())
            result.push_back(txt);
    }
    return result;
}

int main() {
    // Your test cases here
    string s1 = "Hello world!";
    string s2 = "Hello,world!";
    string s3 = "abcdef";
    
    vector<string> res1 = split_words(s1);
    vector<string> res2 = split_words(s2);
    vector<string> res3 = split_words(s3);

    // Print the results
    cout << "Result for " << s1 << ": ";
    for (string str : res1) {
        cout << str << " ";
    }
    cout << endl;
    
    cout << "Result for " << s2 << ": ";
    for (string str : res2) {
        cout << str << " ";
    }
    cout << endl;
    
    cout << "Result for " << s3 << ": ";
    for (string str : res3) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}