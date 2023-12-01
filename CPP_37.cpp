#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<float> sort_even(vector<float> l);
bool issame(vector<float> a, vector<float> b);

int main() {
    vector<float> l = {3.5, 2.0, 4.5, 1.0, 6.0};
    vector<float> sorted = sort_even(l);

    for(float num : sorted){
        cout << num << " ";
    }
    cout << endl;

    return 0;
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