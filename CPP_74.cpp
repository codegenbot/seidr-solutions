#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;

    for (const string& str : lst1) {
        total_chars1 += str.size();
    }

    for (const string& str : lst2) {
        total_chars2 += str.size();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    
    return 0;
}