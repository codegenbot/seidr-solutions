bool is_sorted(const std::vector<int>& lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    
    if (std::is_sorted(lst.begin(), lst.end())) {
        return false;
    }
    
    return 0;
}