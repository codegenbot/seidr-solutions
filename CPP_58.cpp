#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
using namespace std;

bool issame(int x) {
    return x % 2 == 0;
}

vector<int> common(const vector<int>& l1, const vector<int>& l2) {
    vector<int> sorted_l1 = l1;
    vector<int> sorted_l2 = l2;
    sort(sorted_l1.begin(), sorted_l1.end());
    sort(sorted_l2.begin(), sorted_l2.end());

    vector<int> result;
    set_intersection(sorted_l1.begin(), sorted_l1.end(), sorted_l2.begin(), sorted_l2.end(), back_inserter(result));

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