#include <vector>
#include <limits>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == 0 && b.size() == 0) || (a == b);
}

int pluckSame(std::vector<int> arr) {
    if (arr.empty()) return -1;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {
    assert(issame({7, 9, 7, 1}, {})); 
    int result = pluckSame({7, 9, 7, 1}); // call the function
    return 0;
}