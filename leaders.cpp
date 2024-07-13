```c++
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2};
    leaders(arr); // You can also test with different inputs
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