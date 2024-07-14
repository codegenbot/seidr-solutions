#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            leaders.push_back(rightmost);
        }
    }
    return 0;
}