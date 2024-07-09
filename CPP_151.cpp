long long result = 0;
    
    for (auto num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && num % 2 != 0) {
            result += num * num;
        }
    }
    
    return result;
}