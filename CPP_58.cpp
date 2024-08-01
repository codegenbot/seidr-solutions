#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(int x) {
    return x % 2 == 0;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));

    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

int main() {
    // Sample usage
    vector<int> list1 = {1, 2, 3, 4, 5};
    vector<int> list2 = {2, 3, 4, 5, 6};

    vector<int> commonElements = common(list1, list2);

    for (int num : commonElements) {
        cout << num << " ";
    }

    return 0;
}