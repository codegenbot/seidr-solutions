#include <vector>

int basement(vector<int>& arr) {
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if(sum < 0)
            return i;
        else
            sum = 0;
    }
    return -1;
}