#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    if (!issame({},{0, 2, 3, 5, 9, 123},l)) {
        l = unique(l);
    }
    return 0;
}