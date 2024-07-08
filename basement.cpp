#include <vector>
using namespace std;

int basementIndex(const vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
        if (sum < 0) return i;
    }
    return -1; 
}

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int index = basementIndex(arr);
    cout << "Basement Index: " << index << endl;
    return 0;
}