long long result = 0;
    for (auto num : lst) {
        if (num > 0 && num == floor(num) && fmod(num, 2) != 0) {
            result += static_cast<long long>(pow(num, 2));
        }
    }
    return result;

}