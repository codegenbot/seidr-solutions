#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<float> a, vector<float> b){
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

vector<float> sort_even(vector<float> l){
    vector<float> l_prime(l.size());
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime[i] = l[i];
        }else{
            l_prime[i] = l_prime[i-1];
        }
    }
    sort(l_prime.begin(), l_prime.end());
    return l_prime;
}

int main() {
    // Test the code
    vector<float> l = {3.2, 1.5, 4.8, 2.7, 5.1};
    vector<float> sorted_even = sort_even(l);
    for(float num : sorted_even){
        cout << num << " ";
    }
    cout << endl;
    
    vector<float> a = {1.2, 3.4, 5.6};
    vector<float> b = {1.2, 3.4, 5.6};
    bool same = issame(a, b);
    cout << (same ? "Same" : "Not same") << endl;
    
    return 0;
}