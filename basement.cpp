#include <vector>
using namespace std;

int basementIndex(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {-2, 3, 4, -1};
    cout << basementIndex(arr) << endl;
    return 0;
}