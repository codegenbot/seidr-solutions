#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> sum_product(vector<int> nums){
    int sum = 0;
    int product = 1;
    
    for(int num : nums){
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    vector<int> result = sum_product(nums);

    assert(issame(result, {10, 10}));

    cout << "Sum: " << result[0] << endl;
    cout << "Product: " << result[1] << endl;

    return 0;
}