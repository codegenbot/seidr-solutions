if(arr.empty()) {
        return -32768;
    }

    int result = 1;
    int sum = 0;

    for(int num : arr) {
        result *= num == 0 ? 0 : num > 0 ? 1 : -1;
        sum += abs(num);
    }

    return result * sum;
}