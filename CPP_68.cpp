#include <vector>
#include <limits>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if(arr.empty()) return result;

    int minEvenValue = std::numeric_limits<int>::max();
    int minIndex = -1;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEvenValue);
    result.push_back(minIndex);

    return result;
}

int main() {
    assert(pluck({7, 9, 7, 1}) == std::vector<int>{}); 
    return 0;
}