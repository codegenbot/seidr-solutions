#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0)
        return true;
    else
        return false;
}

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && all_of(a.begin(), a.end(), [&](int x) { return count(b.begin(), b.end(), x) > 0; });
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        bool found = false;
        for (int j = 0; j < arr.size(); j++) {
            if (issame(arr[i], arr[j])) {
                found = true;
                break;
            }
        }
        if (found) {
            result.push_back({arr[i], i});
            break;
        }
    }

    if (result.empty()) {
        for (int num : arr) {
            if (num % 2 != 0) return {{num, -1}};
        }
    }

    return result;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1<< ": ";
        cin >> x;
        arr.push_back(x);
    }

    vector<pair<int, int>> result = pluck(arr);

    if (!result.empty()) {
        cout << "The first even number that appears more than once is: " << result[0].first << endl;
    } else {
        cout << "No such number exists." << endl;
    }

    return 0;
}