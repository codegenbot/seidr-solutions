#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             }
             return a < b;
         });
    return result;
}

int main() {
    vector<string> lst;
    cout << "Enter the list of strings. Enter 'stop' to finish entering the list." << endl;
    string s;
    while (true) {
        cin >> s;
        if (s == "stop") break;
        lst.push_back(s);
    }
    vector<string> result = sorted_list_sum(lst);
    cout << "The sum of strings is: ";
    for (const auto& str : result) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}