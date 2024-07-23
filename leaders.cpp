#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 115, 100, 27};
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        bool isLeader = true;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            leaders.push_back(arr[i]);
        }
    }
    cout << "The leaders in the array are: ";
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    cout << endl;
    
    return 0;
}