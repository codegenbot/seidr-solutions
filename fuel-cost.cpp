Here is the solution:

int calculate(int n) {
    return (n / 3) - 2;
}

int main() {
    int N;
    std::cin >> N;

    if(N == 0)
        return 0;

    int sum = 0;
    for(int i = 1; i <= N; i++) {
        sum += calculate(i);
    }

    std::cout << sum << std::endl;

    return 0;
}