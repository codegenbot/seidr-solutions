#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    while(k--) {
        result.push_back(*std::max_element(arr.begin(), arr.end()));
        arr.erase(std::remove(arr.begin(), arr.end(), *std::max_element(arr.begin(), arr.end())), arr.end());
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, -23, 243, -400, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> myVector (arr, arr+n);
    if(isSame(maximum(myVector, 4), {0, 1, 2, 3})) {
        for(int i = 0; i < 4; ++i) {
            std::cout << maximum(myVector, 4)[i] << " ";
        }
    } else {
        std::cout << "Output is not as expected";
    }
    return 0;
}