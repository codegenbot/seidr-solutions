#include <algorithm>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) 
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    vector<string> b({"aaaa", "bbbb", "dd", "cc"});
    assert(issame(vector<string>({"aaaa", "bbbb", "dd", "cc"}), b));
    return 0;
}