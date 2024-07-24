#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == 0 && b.size() == 0);
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEven);
    result.push_back(minIndex);

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}