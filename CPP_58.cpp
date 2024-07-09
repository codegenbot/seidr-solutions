#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(),
                      back_inserter(result));

    return result;
}

int main() {
    // Example usage
    vector<int> v1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> v2 = {5, 7, 1, 5, 9, 653, 121};

    vector<int> commonElements = common(v1, v2);

    cout << "Common elements: ";
    for (int i : commonElements) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}