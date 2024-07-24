#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(const vector<string>& lst) {
    auto temp_lst = lst;
    temp_lst.erase(remove_if(temp_lst.begin(), temp_lst.end(), [](const string& s) { return s.length() % 2 != 0; }), temp_lst.end());
    sort(temp_lst.begin(), temp_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return temp_lst;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));

    return 0;
}