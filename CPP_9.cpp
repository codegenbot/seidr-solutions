#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int maxNum = INT_MIN;
    for(int num : numbers){
        maxNum = max(maxNum, num);
        result.push_back(maxNum);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}