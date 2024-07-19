#include <algorithm>
#include <vector>

bool areSame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> evenSort(std::vector<float> l) {
    std::vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            auto even_elements(l.begin() + i);
            even_elements = (l.begin() + i, l.end());
            std::sort(even_elements.begin(), even_elements.end());
            l_prime.push_back(*std::min_element(even_elements.begin(), even_elements.end()));
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}

int main(){
    assert (areSame(evenSort({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), evenSort({-12, 8, 3, 4, 5, 2, 12, 11, 23, -10})));
    return 0;
}