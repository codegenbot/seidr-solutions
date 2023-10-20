#include <map>
#include <set>
#include <iostream>
using namespace std;
/*
 *
*/

void print(const map<string, int>& m) {
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
}

void print(const set<string>& s) {
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << endl;
    }
}

int main() {
    map<string, int> m;
    m["abc"] = 1;
    m["def"] = 2;
    m["ghi"] = 3;
    m["abc"] = 10;
    cout << "m:" << endl;
    print(m);

    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");
    s.insert("abc");
    cout << "s:" << endl;
    print(s);

    return 0;
}
