#include <vector>
#include <string>
using namespace std;

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
    assert(issame({"this"}, {}));
    
    return 0;
}