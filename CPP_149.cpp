#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sorted_lst.erase(remove_if(sorted_lst.begin(), sorted_lst.end(), [](const string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_lst;
}

vector<string> lst = {"apple", "banana", "carrot", "date", "elephant"};
vector<string> result = sorted_list_sum(lst);
for (const auto& s : result) {
    cout << s << " ";
}
cout << endl;