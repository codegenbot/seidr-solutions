#include <vector>
using namespace std;

int main() {
    std::vector<int> arr = {19}; 
    std::vector<int> result;
    int maxSeenSoFar = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxSeenSoFar) {
            result.push_back(arr[i]);
            maxSeenSoFar = arr[i];
        }
    }
    return 0;
}