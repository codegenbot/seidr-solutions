#include <vector> // Add this line to include the vector header
#include <cassert> // Add this line for using assert

using namespace std; // Add this line for using std namespace

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int changes = 0;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            changes++;
        }
    }

    return changes;
}