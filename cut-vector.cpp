#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    if(n == 0)
        return {{}};
    
    for(int i = 1; i <= n/2; i++) {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j < i; j++)
            leftSum += vec[j];
        for(int j = i; j < n; j++)
            rightSum += vec[j];
        
        if(abs(leftSum - rightSum) <= abs(leftSum - (n-leftSum))) {
            result.push_back(vector<int>(vec.begin(), vec.begin() + i));
            result.push_back(vec.substr(i));
            return result;
        }
    }
    
    result.push_back(vec);
    result.push_back({});
    return result;
}