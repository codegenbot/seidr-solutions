#include <iostream>
#include <set>

using namespace std;

bool issame(set<int> s1, set<int> s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (int i : s1) {
        if (!s2.count(i)) {
            return false;
        }
    }
    return true;
}

int main() {
    set<int> s1 = {7, 9};
    set<int> s2 = {7};
    cout << boolalpha << issame(s1, s2) << endl;  
    set<int> s3 = {7};
    set<int> s4 = {7};
    cout << boolalpha << issame(s3, s4) << endl;  
    return 0;
}