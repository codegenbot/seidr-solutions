```
#include <vector>
#include <algorithm>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> findMaximum(int n, int k) {
    std::cout << "Enter the number of elements: ";
    int* arr = new int[n];
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    std::vector<int> myVector;
    for (int i = 0; i < n; ++i) {
        myVector.push_back(arr[i]);
    }
    
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        int max_val = *std::max_element(myVector.begin(), myVector.end());
        result.push_back(max_val);
        auto it = std::remove_if(myVector.begin(), myVector.end(), [&](int x){ return x == max_val;});
        myVector.erase(it, myVector.end());
    }
    
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    int k;
    std::cout << "Enter the number of maximum elements to find: ";
    std::cin >> k;
    
    assert(same({}, findMaximum(n, k)));
    return 0;
}