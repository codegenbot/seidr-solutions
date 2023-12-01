#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_third(vector<int> l);

vector<int> sort_third(vector<int> l){
    vector<int> l_prime(l.size());
    vector<int> divisible_by_three_indices;

    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            divisible_by_three_indices.push_back(i);
        }
    }

    sort(divisible_by_three_indices.begin(), divisible_by_three_indices.end());

    for(int i = 0; i < l.size(); i++){
        if(find(divisible_by_three_indices.begin(), divisible_by_three_indices.end(), i) != divisible_by_three_indices.end()){
            l_prime[i] = l[i];
        }
    }

    return l_prime;
}

int main(){
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));

    return 0;
}