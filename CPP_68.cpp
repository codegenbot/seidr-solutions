#include <vector>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallestEven = INT_MAX;
    int smallestEvenIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestEvenIndex = i;
        }
    }
    
    if (smallestEvenIndex != -1) {
        result.push_back(smallestEven);
        result.push_back(smallestEvenIndex);
    }
    
    return result;
}

int main() {
    assert (issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}