int prod_signs(vector<int> arr) {
    int product = 1;
    for (int num : arr) {
        if (num != 0) {
            product *= sign(num);
        }
    }
    return product * sum_magnitude(arr);
}

int sign(int num) {
    if (num > 0) {
        return 1;
    } else if (num < 0) {
        return -1;
    } else {
        return 0;
    }
}

long long sum_magnitude(vector<int> arr) {
    long long sum = 0;
    for (int num : arr) {
        sum += abs(num);
    }
    return sum;
}