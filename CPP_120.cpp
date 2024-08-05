#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(const vector<int>& arr, int k){
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end(), greater<int>());
    sortedArr.resize(k);
    return sortedArr;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), vector<int>{}));
    return 0;
}