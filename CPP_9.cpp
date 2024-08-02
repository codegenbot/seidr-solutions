#include <vector>
#include <algorithm>

bool issame(const vector<int>& v1, const vector<int>& v2){
    return v1 == v2;
}

vector<int> rolling_max(const vector<int>& numbers){
    vector<int> result;
    int max_num = numbers[0];
    for(int i = 0; i < numbers.size(); i++){
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}