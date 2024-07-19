#include <iostream>
#include <string>
#include <map>

bool issame(map<char,int> a,map<char,int> b){
    return a==b;
}

map<char, int> histogram(const string& s) {
    map<char, int> m;
    for (char c : s) {
        if (m.find(c) == m.end()) {
            m[c] = 1;
        } else {
            m[c]++;
        }
    }
    return m;
}

int main() {
    std::string test;
    cout << "Enter a string: ";
    getline(cin, test);

    map<char, int> histogram = histogram(test);

    for (auto p : histogram) {
        cout << p.first << ": " << p.second << endl;
    }

    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}