#include <vector>
#include <algorithm>

using namespace std;

vector<int> order_by_points(vector<int> nums){
    vector<int> result;
    vector<pair<int, int>> sums;
    
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = nums[i];
        
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        
        sums.push_back(make_pair(sum, i));
    }
    
    sort(sums.begin(), sums.end());
    
    for(auto p : sums){
        result.push_back(nums[p.second]);
    }
    
    return result;
}

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert (issame(order_by_points({0,6,6,-76,-21,23,4}) , {-76, -21, 0, 4, 23, 6, 6}));

    return 0;
}