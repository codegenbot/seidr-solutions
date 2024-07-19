#include <vector>
#include <algorithm>

bool operator==(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

vector<float> sort_even(vector<float> l){
    vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> even_elements(l.begin() + i, l.begin() + i+1);
            sort(even_elements.begin(), even_elements.end());
            l_prime.push_back(*max_element(even_elements.begin(), even_evenlements.end()));
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}