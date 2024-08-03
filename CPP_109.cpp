#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool move_one_ball(vector<int>& arr);

int main() {
    vector<int> arr = {2, 4, 1, 5, 3};
    cout << move_one_ball(arr) << endl;
    return 0;
}

bool move_one_ball(vector<int>& arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(is_sorted(arr.begin(), arr.end())){
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}