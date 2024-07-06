```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    
    vector<int> result = maximum(arr, k);
    
    if(result.size() == k) {
        cout << "The first " << k << " elements are the same: ";
        for (int i = 0; i < k; i++) {
            cout << *result.rbegin();
            if(i != k - 1)
                cout << " ";
        }
        cout << endl;
    } else {
        cout << "The first " << k << " elements are not the same." << endl;
    }
    
    return 0;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}