#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> total_match(const initializer_list<string>& lst) {
    return vector<string>(lst);
}

bool issame(const vector<string>& a, const vector<string>& b) {
    int total_chars_lst1 = 0;
    int total_chars_lst2 = 0;

    for (const string& str : a) {
        total_chars_lst1 += str.size();
    }

    for (const string& str : b) {
        total_chars_lst2 += str.size();
    }

    return total_chars_lst1 == total_chars_lst2;
}

int main() {
    assert(issame(total_match({"this"}), total_match({})));

    return 0;
}