```cpp
bool issame(vector<float> a,vector<float>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> even(l.begin() + i, (l.begin() + i + 1 > l.end()) ? l.end() : (l.begin() + i + 1));
            sort(even.begin(), even.end());
            l_prime.push_back(even[0]);
        }else{
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;