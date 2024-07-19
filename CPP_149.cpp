#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, const vector<string>& b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

int main() {
    vector<string> vector1 = {"apple", "banana", "orange"};
    vector<string> vector2 = {"apple", "banana", "orange"};
    
    bool result = issame(vector1, vector2);
    
    if (result) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are different." << endl;
    }
    
    return 0;
}