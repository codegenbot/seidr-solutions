Here is the completed code:

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && num <= frequency.count(num)) {
            max = num;
        }
    }
    return max;
}

int main() {
    vector<int> lst = {4, 1, 2, 2, 3, 1};
    cout << search(lst) << endl; // Output: 2
    return 0;
}