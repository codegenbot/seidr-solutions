#include<iostream>
#include<vector>
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

int main() {
    vector<int> numbers = {1, 2, 3, 4};
    pair<int, int> result = sum_product(numbers);
    cout << "(" << result.first << ", " << result.second << ")" << endl;
    
    return 0;
}