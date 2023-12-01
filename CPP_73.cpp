#include <vector>
#include <cassert>

int smallest_change(std::vector<int> arr){
    int n = arr.size();
    int count = 0;
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-i-1]){
            count++;
        }
    }
    return count;
}

int main(){
    assert (smallest_change({0, 1}) == 1);
    assert (smallest_change({1, 1, 1, 1}) == 0);
    assert (smallest_change({1, 2, 3, 4, 5}) == 2);
    assert (smallest_change({5, 4, 3, 2, 1}) == 2);
    assert (smallest_change({1, 2, 3, 2, 1}) == 0);
    assert (smallest_change({1, 1, 2, 2, 3, 3}) == 0);
    assert (smallest_change({1, 1, 2, 1, 1}) == 1);
    assert (smallest_change({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}) == 5);
    assert (smallest_change({10, 9, 8, 7, 6, 5, 4, 3, 2, 1}) == 5);
    assert (smallest_change({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}) == 5);
    assert (smallest_change({11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1}) == 5);
    // Add more test cases here
    return 0;
}