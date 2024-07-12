using namespace std;

#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> remove_duplicates(const vector<int>& vec) {
    vector<int> result;
    for (int i : vec) {
        if (find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }
    return result;
}

{
    vector<int> test1 = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    vector<int> test2 = {1, 2, 3, 4, 5};
    if (issame(test1, test2)) {
        for (int i : test1) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Test failed" << endl;
    }
}