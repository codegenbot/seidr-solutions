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

void runTests() {
    assert(issame({1,2,3,5},{-1,2,3,4}) == vector<bool>({{!(1==-1),!((2-2)!=0),!((3-3)!=0),!(5!=4)}}));
    // Add your own test cases here if needed
}

int main() {
    runTests();
    return 0;
}