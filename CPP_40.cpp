```
#include <iostream>
#include <vector>
using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> l = {1, 3, 5, 0};
    cout << triples_sum_to_zero(l) << endl;
    return 0;
}
```
