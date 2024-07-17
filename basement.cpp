#include <vector>
using namespace std;

int basement(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0)
            return i;
    }
    return -1;

}

int main() {
    vector<int> arr = {-2, 1, 3};
    int result = basement(arr);
    cout << "Basement found at index: " << result << endl;
    return 0;
}