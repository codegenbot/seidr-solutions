#include <vector>
#include <cassert>

bool pairs_sum_to_zero(vector<int> l){
    for(int i = 0; i < l.size(); i++){
        for(int j = i+1; j < l.size(); j++){
            if(l[i] + l[j] == 0){
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Testing the function
    vector<int> numbers = {-2, -1, 0, 1, 2};
    assert(pairs_sum_to_zero(numbers) == false);

    vector<int> numbers2 = {-2, -1, 0, 1, 2, 3};
    assert(pairs_sum_to_zero(numbers2) == true);

    vector<int> numbers3 = {-1, 0, 1};
    assert(pairs_sum_to_zero(numbers3) == true);

    vector<int> numbers4 = {0};
    assert(pairs_sum_to_zero(numbers4) == false);

    return 0;
}