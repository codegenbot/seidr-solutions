#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(vector<float> l);
bool is_same(vector<float> a, vector<float> b);

int main() {
    vector<float> a = {2.5, 1.5, 3.5, 1.7, 4.5, 2.3};
    vector<float> b = {1.5, 2.5, 1.7, 3.5, 4.5, 2.3};
    
    vector<float> sorted = sort_even(a);
    bool same = is_same(sorted, b);
    
    cout << boolalpha << same;
    
    return 0;
}

vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    vector<float> even;
    
    for(int i=0; i<l.size(); i+=2){
        even.push_back(l[i]);
    }
    
    sort(even.begin(), even.end());
    
    for(int i=0, j=0; i<l.size(); i+=2, j++){
        result[i] = even[j];
    }
    
    return result;
}

bool is_same(vector<float> a, vector<float> b){
    assert(a.size() == b.size());
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}