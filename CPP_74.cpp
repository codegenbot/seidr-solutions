#include <string>
#include <vector>
#include <cassert>

using namespace std;

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& s : lst) {
        total += s.length();
    }
    return total;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    return total_chars(lst1) < total_chars(lst2) ? lst1 : lst2;
}

int main() {
    assert(total_match({"this"}, {}).empty());
}