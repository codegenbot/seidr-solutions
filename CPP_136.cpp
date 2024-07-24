#include <iostream>
#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int i : lst) {
        if (i < 0 && abs(i) > maxNeg) {
            maxNeg = i;
        } else if (i > 0 && i < minPos) {
            minPos = i;
        }
    }

    return {(maxNeg == 0 ? 0 : maxNeg), (minPos == INT_MAX ? 0 : minPos)};
}

int main() {
    vector<int> lst1 = {2, 4, 1, 3, 5, 7};
    vector<int> result1 = largest_smallest_integers(lst1);
    cout << "largest smallest integers for " << lst1 << ": ";
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> lst2;
    vector<int> result2 = largest_smallest_integers(lst2);
    cout << "largest smallest integers for " << lst2 << ": ";
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> lst3 = {0};
    vector<int> result3 = largest_smallest_integers(lst3);
    cout << "largest smallest integers for " << lst3 << ": ";
    for (int i : result3) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}