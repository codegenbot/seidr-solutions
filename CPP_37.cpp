#include <vector>
#include <algorithm>

vector<float> sort_even(vector<float> l);

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
    vector<float> l_prime;
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            l_prime.push_back(l[i]);
        }
    }
    sort(l_prime.begin(), l_prime.end());
    int j = 0;
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            l_prime.insert(l_prime.begin() + i, l[j]);
            j++;
        }
    }
    return l_prime;
}

int main() {
    // Test the sort_even function
    vector<float> input = {4.5, 2.3, 7.8, 1.2, 3.4};
    vector<float> sorted = sort_even(input);
    vector<float> expected = {1.2, 4.5, 3.4, 7.8, 2.3};
    if(issame(sorted, expected)){
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}