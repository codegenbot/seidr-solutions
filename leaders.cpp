#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2}; // Your input array
    vector<int> result = leaders(arr);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int rightmost = arr.back();
    vector<int> result;
    result.push_back(rightmost);
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}