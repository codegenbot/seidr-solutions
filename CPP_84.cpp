string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<32>(sum).to_string().substr(32 - sum);
}

int main() {
    int input = 963; // Input can be changed for testing purposes
    string result = solve(input);
    return 0;
}