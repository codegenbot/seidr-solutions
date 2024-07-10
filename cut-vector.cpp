#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& vec) {
    int n = vec.size();
    vector<vector<int>> result;
    
    if (n == 0)
        return {{}};
    
    if (n == 1)
        return {{vec}, {}};
    
    for (int i = 1; i < n; i++) {
        long long sum1 = 0, sum2 = 0;
        
        for (int j = 0; j < i; j++)
            sum1 += vec[j];
        
        for (int j = i; j < n; j++)
            sum2 += vec[j];
        
        if (abs(sum1 - sum2) <= abs((sum1 + sum2) / 2 - sum2))
            result = {{vec.substr(0, i)}};
        else
            result = {{vec.substr(0, i)}, {vec.substr(i, n-i)}};
    }
    
    return result;
}