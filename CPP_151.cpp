long long total = 0;
    for (const auto &num : lst) {
        if (num > 0 && num == floor(num) && static_cast<int>(num) % 2 != 0) {
            total += static_cast<long long>(pow(num, 2));
        }
    }
    return total;
}