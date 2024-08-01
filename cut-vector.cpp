#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    vector<vector<int>> result;
    
    for(int i = 1; i <= vec.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j = 0; j < i; j++)
            left_sum += vec[j];
        for(int j = i; j < vec.size(); j++)
            right_sum += vec[j];
        
        if(abs(left_sum - right_sum) <= min_diff) {
            min_diff = abs(left_sum - right_sum);
            result = {{}}; // Initialize the result vector
            
            for(int k = 0; k < i; k++)
                result[0].push_back(vec[k]);
            result.push_back({}); // Add a new subvector
            for(int k = i; k < vec.size(); k++)
                result.back().push_back(vec[k]);
        }
    }
    
    return result;
}