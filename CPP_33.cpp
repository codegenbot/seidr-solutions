#include <iostream>
#include <vector>
#include <algorithm>

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

int contest_main(){
    return 0;
}