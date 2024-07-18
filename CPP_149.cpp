#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(vector<string> a, vector<string> b) {
    a.insert(a.end(), b.begin(), b.end());
    
    a.erase(remove_if(a.begin(), a.end(), [](const string& s) { return s.length() % 2 != 0; }), a.end());
    
    sort(a.begin(), a.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return a;
}

int main() {
    vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"});
    vector<string> second_result = sorted_list_sum({"cc", "dd"}, {"eeee", "zzzz"});
    
    for (const auto& str : second_result) {
        cout << str << " ";
    }

    assert(result == vector<string>{"cc", "dd", "aaaa", "bbbb"});

    return 0;
}