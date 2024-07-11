#include <vector>
using namespace std;

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEvenVal = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEvenVal);
    result.push_back(minIndex);

    return result;
}

int main() {
    std::vector<int> input;
    // read input from user and store in 'input' variable
    std::vector<int> result = pluck(input);
    return 0;
}