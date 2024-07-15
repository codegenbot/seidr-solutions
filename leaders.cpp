#include <vector>
using namespace std;

int main() {
    vector<int> leaders;
    int rightmost = 5; // Example value
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    leaders.push_back(rightmost);
    return 0;
}