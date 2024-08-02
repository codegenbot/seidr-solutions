#include <vector>
using namespace std;

int basementIndex(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0)
            return i;
    }
    return -1; // Return -1 as the input does not contain a basement.
}