long long result = 0;
    for(float num : lst) {
        if(num > 0 && num == (int)num && (int)num % 2 == 1) {
            result += num * num;
        }
    }
    return result;
}