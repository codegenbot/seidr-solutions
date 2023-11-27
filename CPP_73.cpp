#include <iostream>
#include <vector>

using namespace std;

int smallest_change(vector<int> arr){
    int n = arr.size();
    int count = 0;
    
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-i-1]){
            count++;
        }
    }
    
    return count;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    // Add more test cases here
  
    return 0;
}