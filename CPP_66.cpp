```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int digitSum(string s){
    int sum = 0;
    for(auto& word : split(s, " ")){
        for(char c : word){
            if(isdigit(c))
                sum += c - '0';
        }
    }
    return sum;

}

string split(const string& s, const char& sep) {
    vector<string> v;
    size_t pos = 0, prev = 0;

    while ((pos = s.find(sep, prev)) != string::npos) {
        v.push_back(s.substr(prev, pos - prev));
        prev = pos + 1;
    }

    v.push_back(s.substr(prev));
    return join(v, " ");
}

string join(const vector<string>& v, const char& sep) {
    string s;
    for (auto it = v.begin(); it != v.end(); ++it)
        s += *it + sep;
    return s.substr(0, s.size() - 1); // remove trailing sep
}

int main() {
    assert(digitSum("you are very smart") == 342);
    cout << digitSum("you are very smart") << endl;
    return 0;
}