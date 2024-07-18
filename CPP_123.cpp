#include <vector>
#include <algorithm>

vector<int> CPP123(vector<int> a, vector<int> b) {
    vector<int> result;
    int n = a.size();
    
    for (int i = 0; i < n; i++) {
        result.push_back(a[i]);
        result.push_back(b[i]);
    }

    vector<int> odd_nums;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_nums.push_back(num);
        }
    }
    sort(odd_nums.begin(), odd_nums.end());
    return odd_nums;
}