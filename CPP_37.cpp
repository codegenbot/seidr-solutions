bool issame(vector<float> a, vector<float>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(std::abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> even(l.begin() + i, l.begin() + i + 1);
            sort(even.begin(), even.end());
            l_prime.push_back(even[0]);
        }else{
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}