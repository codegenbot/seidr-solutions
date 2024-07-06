#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    int k;
    std::cin >> k;

    vector<int> arr;
    for(int i = 0; i < 7; i++)
        arr.push_back(i - 3); // Example array, replace with your input

    if(k <= 0) {
        cout << "Invalid value of k" << endl;
        return -1;
    } else {
        vector<int> res = maximum(arr, k);
        for(int i = 0; i < k; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(arr.begin(), arr.end() - k + 1, arr.end());
    for (int i = 0; i < k; i++) {
        res[i] = arr[arr.size() - k + i];
    }
    return res;
}