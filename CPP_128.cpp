int prod_signs(vector<int> arr){
    int sign_product = 1;
    long long total_sum = 0;

    for (int i : arr) {
        if (i == 0)
            return 0;
        sign_product *= ((i > 0) ? 1 : -1);
        total_sum += abs(i);
    }

    if (arr.empty())
        return -32768;

    return sign_product * total_sum;
}