#include <iostream>
#include <vector>
using namespace std;

int can_arrange(vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return i;
    }
    return -1;
}

int main(){
    vector<int> arr = {5, 3, 2, 7, 6};
    int result = can_arrange(arr);
    cout << "The first index where the array is not sorted in ascending order: " << result << endl;
    return 0;
}