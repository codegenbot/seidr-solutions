#include <vector>
using namespace std;

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> input;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        input.push_back(x);
    }
    int output = can_arrange(input);
    cout << "Output: " << output << endl;
    return 0;
}