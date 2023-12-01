#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> l_prime;
    vector<float> even_indices;
    
    for(int i=0; i<l.size(); i+=2){
        even_indices.push_back(l[i]);
        l_prime.push_back(l[i]);
    }
    
    sort(even_indices.begin(), even_indices.end());
    
    int j = 0;
    for(int i=0; i<l_prime.size(); i+=2){
        l_prime[i] = even_indices[j];
        j++;
    }
    
    return l_prime;
}