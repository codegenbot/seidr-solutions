#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame_v(const vector<string>& a, const vector<string>& b) {
    return (a == b);
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sorted_lst.erase(remove_if(sorted_lst.begin(), sorted_lst.end(), [](const string& s){ return s.length() % 2 != 0; }), sorted_lst.end());
    sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_lst;
}

int main() {
    int n;
    cin >> n;
    vector<string> input_lst(n);
    for (int i = 0; i < n; ++i) {
        cin >> input_lst[i];
    }

    vector<string> result = sorted_list_sum(input_lst);

    for (const auto& str : result) {
        cout << str << endl;
    }

    assert(issame_v(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));

    return 0;
}