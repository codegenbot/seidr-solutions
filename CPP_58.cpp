#include <vector>
#include <algorithm>

vector<int> issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    
    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

int main() {
    vector<int> l1 = {1, 2, 3, 4, 5};
    vector<int> l2 = {1, 3, 5, 7, 9};

    vector<int> res = issame(l1, l2);

    for (int num : res) {
        cout << num << " ";
    }

    return 0;
}