```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 11};
    vector<int> leadersVector = leaders(arr);
    for (auto leader : leadersVector) {
        cout << leader << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int last = arr.back();
    
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= last) {
            result.push_back(arr[i]);
            last = arr[i];
        }
    }
    
    result.push_back(last);
    return result;
}