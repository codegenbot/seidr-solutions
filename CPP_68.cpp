#include <vector>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your comparison logic here
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    
    if (arr.empty()) {
        result.push_back(INT_MAX);
        result.push_back(-1);
        return result;
    }

    int smallestEvenValue = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            index = i;
        }
    }

    result.push_back(smallestEvenValue);
    result.push_back(index);

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}