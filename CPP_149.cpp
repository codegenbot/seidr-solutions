#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) {
        return s.length() % 2 != 0;
    }), lst.end());

    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return lst;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    vector<string> lst(n);
    for(int i = 0; i < n; ++i) {
        cin >> lst[i];
    }

    vector<string> result = sorted_list_sum(lst);
    for(const auto& str : result) {
        cout << str << " ";
    }
    return 0;
}