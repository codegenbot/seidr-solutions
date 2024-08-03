#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars1 = 0, total_chars2 = 0;
    
    for (const string& str : lst1) {
        total_chars1 += str.length();
    }
    
    for (const string& str : lst2) {
        total_chars2 += str.length();
    }
    
    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}