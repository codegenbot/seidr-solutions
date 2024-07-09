#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

string join(const vector<string>& v, char sep) {
    string s;
    for (auto it = v.begin(); it != v.end(); ++it)
        s += *it + sep;
    return s.substr(0, s.size() - 1); // remove trailing sep
}

string ssplit(const string& s, char sep) {
    vector<string> v;
    size_t pos = 0;

    while ((pos = s.find(sep, pos)) != string::npos) {
        v.push_back(s.substr(0, pos));
        pos++;
    }

    v.push_back(s.substr(pos));
    return join(v, ' ');
}

int digitSum(string s){
    int sum = 0;
    vector<string> words = ssplit(s, ' ');
    for(auto& word : words){
        for(char c : word){
            if(isdigit(c))
                sum += (c - '0');
        }
    }
    return sum;

}

int main() {
    assert(digitSum("you are very smart") == 342);
    cout << digitSum("you are very smart") << endl;
    return 0;
}