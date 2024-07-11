#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for(int i=0; i<v.size()-1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for(int j=0; j<i; j++) {
            left_sum += v[j];
        }
        
        for(int j=i+1; j<v.size(); j++) {
            right_sum += v[j];
        }
        
        if(abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            cut_index = i;
        }
    }
    
    vector<vector<int>> result(2);
    result[0].resize(cut_index+1);
    for(int i=0; i<=cut_index; i++) {
        result[0].push_back(v[i]);
    }
    result[1].resize(v.size() - cut_index - 1);
    for(int i=cut_index+1; i<v.size(); i++) {
        result[1].push_back(v[i]);
    }
    
    return result;
}