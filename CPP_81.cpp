#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}