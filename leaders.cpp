#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 11, 13, 2, 23, 19};
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    return 0;
}