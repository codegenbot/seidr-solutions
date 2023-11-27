#include <vector>
#include <algorithm>

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
    vector<float> l_prime = l;
    vector<float> even_values;
    
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            even_values.push_back(l[i]);
        }
    }
    
    sort(even_values.begin(), even_values.end());
    
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            l_prime[i] = even_values[i/2];
        }
    }
    
    return l_prime;
}

int main() {
    // Test the sort_even function
    vector<float> input = {5.6, 2.3, 1.8, 4.2, 3.1};
    vector<float> expected_output = {1.8, 2.3, 3.1, 4.2, 5.6};
    vector<float> output = sort_even(input);
    
    if(issame(output, expected_output)){
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}