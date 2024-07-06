#include <vector>
#include <climits>
#include <numeric>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int minEven = numeric_limits<int>::max();
    int index = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }
    
    result.push_back({minEven, index});
    return result;
}

int main() {
    assert(pluck({7, 9, 7, 1}) == {{}});
    return 0;
}