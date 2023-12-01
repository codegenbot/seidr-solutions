#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n);

bool issame(vector<int> a, vector<int> b);

vector<int> get_odd_collatz(int n){
    vector<int> collatz;
    collatz.push_back(n);
    
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (3 * n) + 1;
        }
        
        collatz.push_back(n);
    }
    
    vector<int> odd_collatz;
    for(int i : collatz){
        if(i % 2 != 0){
            odd_collatz.push_back(i);
        }
    }
    
    sort(odd_collatz.begin(), odd_collatz.end());
    
    return odd_collatz;
}