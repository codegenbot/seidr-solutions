Here is the completed code:

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N & 1;
        N >>= 1;
    }
    return std::bitset<8>(sum).to_string();
}