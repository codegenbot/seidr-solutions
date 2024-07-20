#include <iostream>
#include <vector>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2);
    bool hasNegative = false;
    bool hasPositive = false;
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0) {
            hasNegative = true;
            maxNeg = max(maxNeg, num);
        } else if (num > 0) {
            hasPositive = true;
            minPos = min(minPos, num);
        }
    }

    if (!hasNegative && !hasPositive)
        result = {0, 0};
    else
        result = {(hasNegative ? maxNeg : 0), (hasPositive ? minPos : 0)};

    return result;
}

int main() {
    vector<int> lst1 = {2, 4, 1, 3, 5, 7};
    vector<int> lst2 = {};
    vector<int> lst3 = {0};

    cout << "largest_smallest_integers(" << "{2, 4, 1, 3, 5, 7}) == " << largest_smallest_integers(lst1) << endl;
    cout << "largest_smallest_integers({}) == " << largest_smallest_integers(lst2) << endl;
    cout << "largest_smallest_integers({0}) == " << largest_smallest_integers(lst3) << endl;

    return 0;
}