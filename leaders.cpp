```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 1) {
        return arr;
    }
    
    int rightmost = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    
    return result;
}

int main() { std::vector<int> input = {}; leaders(input); }