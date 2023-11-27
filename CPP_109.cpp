#include <iostream>
#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr){
    int n = arr.size();
    if(n == 0){
        return true;
    }
    int minIndex = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    int shift = (n - minIndex) % n;
    for(int i=0; i<n; i++){
        int newIndex = (i + shift) % n;
        if(arr[newIndex] < arr[i]){
            return false;
        }
    }
    return true;
}

int main() {
    assert(move_one_ball({}) == true);

    return 0;
}