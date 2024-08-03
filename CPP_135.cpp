```cpp
#include <iostream>
#include <vector>
using namespace std;

int can_arrange(vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] <= arr[i]){
            return i-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {5, 3, 4, 2};
    cout << can_arrange(arr) << endl;
    return 0;
}