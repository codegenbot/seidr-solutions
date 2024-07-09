
    int N;
    std::cin >> N;

    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    std::cout << std::bitset<32>(sum).to_string().substr(32 - sum);
    return 0;