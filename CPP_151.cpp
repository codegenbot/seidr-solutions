long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}