vector<int> l_prime = l;
    sort(l_prime.begin(), l_prime.end(), [](int a, int b) {
        return a % 3 == 0 && b % 3 == 0 ? a < b : false;
    });
    return l_prime;
}