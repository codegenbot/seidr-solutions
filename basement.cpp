#include <vector>
using namespace std;

int basement(vector<int>& arr) {
    int sum = 0;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0 && index == -1) {
            index = i;
        }
    }
    return index;
}

int main() {
    vector<int> arr = {-2, 3, 4, -1, -2, 1, 5, -3};
    int result = basement(arr);
    cout << "Result: " << result << endl;
    return 0;
}