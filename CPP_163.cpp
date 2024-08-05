#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

void generate_integers(vector<int>& v, size_t n) {
    for (int i = 0; i < n; ++i) {
        v.push_back(i);
    }
}

int main() {
    vector<int> vec1, vec2;
    generate_integers(vec1, 5);
    generate_integers(vec2, 5);
    
    if (issame(vec1, vec2)) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are not the same." << std::endl;
    }
    
    return 0;
}