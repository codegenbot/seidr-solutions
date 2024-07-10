#include <iostream>
#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {(maxNeg > 0 ? 0 : maxNeg), (minPos < 1 ? 0 : minPos)};
}

int main() {
    vector<int> lst1 = {2, 4, 1, 3, 5, 7};
    vector<int> result1 = largest_smallest_integers(lst1);
    cout << "Largest negative integer: " << result1[0] << ", Smallest positive integer: " << result1[1] << endl;

    vector<int> lst2 = {};
    vector<int> result2 = largest_smallest_integers(lst2);
    cout << "Largest negative integer: " << result2[0] << ", Smallest positive integer: " << result2[1] << endl;

    vector<int> lst3 = {0};
    vector<int> result3 = largest_smallest_integers(lst3);
    cout << "Largest negative integer: " << result3[0] << ", Smallest positive integer: " << result3[1] << endl;

    return 0;
}