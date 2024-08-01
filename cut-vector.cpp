#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n);
    for (int i = 0; i < n; ++i)
        left[i] = nums[i];
    
    if (n == 1) return {{nums}, {}}; // Edge case when the input is a single element
    
    int diffMin = INT_MAX;
    int cutPoint = -1;
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(left[i] - left[n-1]);
        if (diff <= diffMin) {
            diffMin = diff;
            cutPoint = i;
        }
    }
    
    return {{}, nums.begin(), nums.end()};
}