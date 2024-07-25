#include <iostream>
#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    for(int i=1; i<n; i++) {
        if(arr[i] < arr[0]) 
            return false;
    }
    
    return true;
}

int main() {
    vector<int> v1 = {3, 4, 5, 1, 2};
    vector<int> v2 = {3, 5, 4, 1, 2};

    cout << move_one_ball(v1) << endl; // Expected output: 1
    cout << move_one_ball(v2) << endl; // Expected output: 0

    return 0;
}