#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> lst;
    int n, val;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        lst.push_back(val);
    }

    vector<int> result = largest_smallest_integers(lst);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = 0;
    int smallest_positive = 0;

    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }

    return {largest_negative, smallest_positive};
}