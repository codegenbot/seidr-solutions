#include <iostream>
#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNegative = 0;
    int minPositive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNegative) {
            maxNegative = num;
        } else if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }

    return {(maxNegative >= 0) ? 0 : maxNegative, (minPositive <= 0) ? 0 : minPositive};
}

int main() {
    vector<int> test1 = {2, 4, 1, 3, 5, 7};
    vector<int> test2 = {};
    vector<int> test3 = {0};

    cout << "Test1: " << endl;
    for (int num : largest_smallest_integers(test1)) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Test2: " << endl;
    for (int num : largest_smallest_integers(test2)) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Test3: " << endl;
    for (int num : largest_smallest_integers(test3)) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}