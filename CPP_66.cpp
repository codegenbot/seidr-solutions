#include <iostream>
#include <string>
#include <vector>

using namespace std;

int digitSum(string s){
    int sum = 0;
    vector<string> words = ssplit(s, " ");
    for(auto& word : words){
        for(char c : word){
            if(isdigit(c))
                sum += (c - '0');
        }
    }
    return sum;

}

string join(const vector<string>& v, const string& sep) {
    string s;
    for (auto it = v.begin(); it != v.end(); ++it)
        s += *it + sep;
    if (!sep.empty())
        s.pop_back(); // remove trailing sep
    return s;
}

string ssplit(const string& s, const char& sep) {
    vector<string> v;
    size_t pos = 0, prev = 0;

    while ((pos = s.find(sep, prev)) != string::npos) {
        v.push_back(s.substr(prev, pos - prev));
        prev = pos + 1;
    }

    v.push_back(s.substr(prev));
    return join(v, " ");
}

int main() {
    assert(digitSum("you are very smart") == 342);
    cout << digitSum("you are very smart") << endl;
    return 0;
}