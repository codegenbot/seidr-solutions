if (arr.empty()) return -32768;
    int product_of_signs = 1;
    int sum_of_magnitudes = 0;
    for (int num : arr) {
        product_of_signs *= (num == 0) ? 0 : (num > 0 ? 1 : -1);
        sum_of_magnitudes += abs(num);
    }
    return sum_of_magnitudes * product_of_signs;
}