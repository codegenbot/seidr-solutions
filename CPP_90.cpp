#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
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
    vector<int> testVector = {4, 2, 5, 3};
    cout << "The next smallest number is: " << next_smallest(testVector) << endl;
    return 0;
}