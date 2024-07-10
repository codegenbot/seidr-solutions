bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst);

int main(){
    std::vector<int> result = largest_smallest_integers({-6, -4, -4, -3, -100, 1});
    assert(issame(result, {-3, 1}));
    
    return 0;
}