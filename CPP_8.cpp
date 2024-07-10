#include<vector>
#include<iostream>
#include<utility>
#include<assert.h>
using namespace std;

pair<int, int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;

    for(int num : numbers){
        sum += num;
        product *= num;
    }

    return make_pair(sum, product);
}

int solve_problem(){
    vector<int> numbers = {1, 2, 3, 4};
    pair<int, int> result = sum_product(numbers);

    cout << "(" << result.first << ", " << result.second << ")" << endl;

    return 0;
}

int main(){
    assert(sum_product({10}) == make_pair(10, 10));
    return solve_problem();
}