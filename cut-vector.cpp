#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& arr) {
    int n = arr.size();
    vector<int> left(n+1, 0), right(n+1, INT_MAX);
    
    for (int i = 0; i < n; ++i) {
        left[i+1] = arr[i];
        if (left[i+1] == left[i]) continue;
        int j = i-1;
        while (j >= 0 && left[j+1] == left[j])
            --j;
        right[i] = max(right[i], i - j);
    }
    
    for (int i = n-1; i >= 0; --i) {
        right[i] = min(right[i], n-i-1-right[n-1]);
        if (right[i] == 0) break;
        int j = i+1;
        while (j < n && left[j+1] == left[j])
            ++j;
        left[j] = max(left[j], arr[i]);
    }
    
    int idx = 0;
    for (int i = 0; i < n; ++i) {
        if (right[i] > right[idx]) idx = i;
    }
    
    return {left, vector<int>(arr.begin() + idx, arr.end())};
}