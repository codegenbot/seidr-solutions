```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(vector<int> lst) {
    vector<int> sorted(lst);
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) 
            return sorted[i + 1];
    }
    return -1;

}

int main() {
    vector<int> lst = {1, 2, 3};
    cout << findSmallest(lst) << endl;
    return 0;
}