#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    vector<int> result;
    result.push_back(sum);
    result.push_back(product);

    return result;
}

int main(){
    vector<int> input = {10};
    vector<int> result = sum_product(input);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

    assert(result == vector<int>({10, 10}));

    return 0;
}