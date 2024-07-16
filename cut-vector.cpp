#include <vector>
#include <climits>
#include <iostream>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < n; ++i) {
        int sum_left = 0, sum_right = 0;
        
        for (int j = 0; j < i; ++j) {
            sum_left += v[j];
        }
        
        for (int j = i; j < n; ++j) {
            sum_right += v[j];
        }
        
        int diff = std::abs(sum_left - sum_right);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left, right;
    
    for (int i = 0; i < cut_index; ++i) {
        left.push_back(v[i]);
    }
    
    for (int i = cut_index; i < n; ++i) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}

int main() {
    int n;
    std::cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    std::cout << "[";
    for (int i = 0; i < res.first.size(); ++i) {
        std::cout << res.first[i];
        if (i < res.first.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "] [";
    for (int i = 0; i < res.second.size(); ++i) {
        std::cout << res.second[i];
        if (i < res.second.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << "]\n";
    return 0;
}