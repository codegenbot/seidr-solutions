int result = 0;
    for (float num : lst) {
        int rounded = ceil(num);
        result += rounded * rounded;
    }
    return result;
}