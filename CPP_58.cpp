```
#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return set_intersection(a.begin(), a.end(), b.begin(), b.end()) == {};
}

int main() {
    if (!issame(set_intersection(std::vector<int>{4, 3, 2, 8}.begin(), std::vector<int>{4, 3, 2, 8}.end(), std::vector<int>{}.begin(), std::vector<int>{}.end()), {})) {
        cout << "The vectors are not the same." << endl;
    } else {
        cout << "The vectors are the same." << endl;
    }
    return 0;
}
```