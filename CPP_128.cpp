int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        int sign = num / abs(num);
        sign_product *= sign;
        sum_of_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * sum_of_magnitudes;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    // Add more test cases if needed.
    return 0;
}