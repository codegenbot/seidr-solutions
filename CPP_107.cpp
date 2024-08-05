bool is_same(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> count(2, 0);
    for (int i = 1; i <= n; ++i) {
        std::string num = std::to_string(i);
        std::string rev_num = num;
        std::reverse(rev_num.begin(), rev_num.end());
        if (num == rev_num) {
            if (i % 2 == 0) {
                count[0]++;
            } else {
                count[1]++;
            }
        }
    }
    return count;
}

int main() {
    assert(is_same(even_odd_palindrome(1), {0, 1}));
    return 0;
}