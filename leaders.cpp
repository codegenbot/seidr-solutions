#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int max = arr.back();

    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= max) {
            res.push_back(arr[i]);
            max = arr[i];
        }
    }

    return res;
}