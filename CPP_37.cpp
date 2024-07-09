```cpp
bool issame(vector<float> a,vector<float>b){
    return a == b;

vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> even_indices(l.begin() + i);
            for (int j = i+1; j < l.size(); j++) {
                if (j % 2 == 0) {
                    even_indices.push_back(l[j]);
                }
            }
            sort(even_indices.begin(), even_indices.end());
            l_prime.push_back(even_indices[0]);
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}