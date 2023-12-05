```
#include <iostream>
#include <vector>
using namespace std;

bool below_threshold(const vector<int>& l, int t) {
    for (int i = 0; i < l.size(); i++) {
        if (l[i] >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> my_vector = {1, 2, 3};
    int threshold = 2;
    if (below_threshold(my_vector, threshold)) {
        cout << "All elements in the vector are below the threshold" << endl;
    } else {
        cout << "There is an element in the vector that is above or equal to the threshold" << endl;
    }
    return 0;
}
```