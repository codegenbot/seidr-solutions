#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({1,2,3,5},{-1,2,3,4}) == vector<bool>({{!(a[0]==b[0]),!((a[1]-b[1])!=0),!((a[2]-b[2])!=0),!(a[3]!=b[3])}}));
    return 0;
}