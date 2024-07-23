```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRightSoFar = arr.back();
    for(int i = arr.size() - 2; i >= 0; i--) {
        if(arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> input = {17, 28, 4, 27, 29, 23, 12};
    vector<int> result = leaders(input);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}