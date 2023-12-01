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
    // Test the sort_even function
    vector<float> input = {1.5, 2.3, 4.7, 3.2, 6.1};
    vector<float> output = sort_even(input);
    
    cout << "Sorted even elements: ";
    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    
    // Test the issame function
    vector<float> a = {1.5, 2.3, 4.7};
    vector<float> b = {1.5, 2.3, 4.7};
    
    if(issame(a, b)){
        cout << "\nVectors a and b are identical";
    }else{
        cout << "\nVectors a and b are not identical";
    }
    
    return 0;
}