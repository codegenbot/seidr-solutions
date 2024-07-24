#include <iostream>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    for(int i=1; i<n; i++) {
        if(arr[i] < arr[0]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> v = {3, 4, 5, 1, 2};
    cout << move_one_ball(v) << endl;
    return 0;
}