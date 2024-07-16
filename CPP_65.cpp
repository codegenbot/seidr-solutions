string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n = num_str.size();
    
    if (shift > n) {
        reverse(num_str.begin(), num_str.end());
        return num_str;
    }
    
    shift %= n;
    rotate(num_str.rbegin(), num_str.rbegin() + shift, num_str.rend());
    
    return num_str;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    // Add more test cases here
    
    return 0;
}