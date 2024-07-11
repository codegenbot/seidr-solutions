#include<vector>
#include<tuple>
#include<algorithm>

using namespace std;

tuple<int, int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(auto num : numbers){
        sum += num;
        product *= num;
    }
    
    return make_tuple(sum, product);
}