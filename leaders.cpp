```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;

}

int main() {
    vector<int> arr = {17, 11, 13, 2, 3, 5, 7, 19};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}