#include <algorithm>
#include <vector>
#include <cassert>

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));

    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

bool issame(vector<int> a, vector<int> b){

}

int main() {
    vector<int> l1 = {1, 2, 2, 3, 4};
    vector<int> l2 = {2, 2, 3, 3, 4, 5};

    vector<int> result = common(l1, l2);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}