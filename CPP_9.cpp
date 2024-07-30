#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int maxNum = numbers[0];
    result.push_back(maxNum);
    for(int i = 1; i < numbers.size(); i++){
        maxNum = max(maxNum, numbers[i]);
        result.push_back(maxNum);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
  return a == b;
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}