#include <vector>
#include <initializer_list>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0) return res;
    
    int maxRightSoFar = arr.back(); // the rightmost element is always a leader
    res.push_back(maxRightSoFar);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) {
            res.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    
    return res;
}

std::vector<int> result = leaders({1, 3, 4, 2});
for (int i : result) {
    std::cout << i << " ";
}
return 0;