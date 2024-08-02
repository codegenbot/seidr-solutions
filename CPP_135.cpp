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
        int val;
        cout << "Enter element " << (i+1) << ": ";
        cin >> val;
        input.push_back(val);
    }
    
    int output = can_arrange(input);
    cout << "Output: " << output << endl;
    return 0;
}