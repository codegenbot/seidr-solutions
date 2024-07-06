#include <vector>

using namespace std;

pair<int, int> findMinEvenIndex(vector<int> arr) {
    pair<int, int> result;
    
    if (arr.empty()) {
        result.first = INT_MAX;
        result.second = -1;
        return result;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            if (i == 0 || arr[i-1] % 2 != 0) {
                result.first = arr[i];
                result.second = i;
                break;
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {4, 6, 5};
    pair<int, int> res = findMinEvenIndex(arr);
    cout << "First even number: " << res.first << endl;
    cout << "Its index: " << res.second << endl;

    return 0;
}