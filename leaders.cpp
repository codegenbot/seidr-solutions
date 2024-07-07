#include <vector>
using namespace std;

vector<int> leaders(int arr[], int n) {
    vector<int> result;
    int rightmost = arr[n-1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 3, 4, 1, 5};
    vector<int> leadersVector = leaders(arr, sizeof(arr) / sizeof(arr[0]));
    for (auto leader : leadersVector) {
        cout << leader << endl;
    }
    return 0;
}