#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool are_same(const vector<string>& a, const vector<string>& b) {
    return (a == b);
}

vector<string> sorted_list_sum(const vector<string>& input_lst) {
    vector<string> sorted_input_lst = input_lst;
    sort(sorted_input_lst.begin(), sorted_input_lst.end());

    string sum_str = accumulate(sorted_input_lst.begin(), sorted_input_lst.end(), string(""));
    
    return {sum_str};
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

    assert(are_same(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), vector<string>{"cc", "dd", "aaaa", "bbbb"}));

    return 0;
}