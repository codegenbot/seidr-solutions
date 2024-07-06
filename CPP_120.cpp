#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    namespace std;
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        int max_val = *max_element(arr.begin(), arr.end());
        result.push_back(max_val);
        auto it = remove(arr.begin(), arr.end(), max_val);
        arr.erase(it, arr.end());
    }
    return result;

}

int main() {
    namespace std;
    int k=4;
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> arr_vec(arr, arr+n);
    cout << "Result: ";
    for (int i = 0; i < k; ++i) {
        cout << maximum(arr_vec, k)[i] << " ";
    }
    cout << endl;
}