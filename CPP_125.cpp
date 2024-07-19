#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    if(txt.find(' ') != string::npos){
        size_t start = 0, end = 0;
        while((end = txt.find(' ', start)) != string::npos){
            result.push_back(txt.substr(start, end - start));
            start = end + 1;
        }
        result.push_back(txt.substr(start));
    } else if(txt.find(',') != string::npos){
        size_t start = 0, end = 0;
        while((end = txt.find(',', start)) != string::npos){
            result.push_back(txt.substr(start, end - start));
            start = end + 1;
        }
        result.push_back(txt.substr(start));
    } else {
        int count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    // Add more test cases here
    return 0;
}