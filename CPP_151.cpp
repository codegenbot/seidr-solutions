long long double_the_difference(vector<float> lst) {
    long long odd_sum = 0;
    for (float x : lst) {
        if (x >= 0 && (int)x == x) {
            odd_sum += pow(x, 2);
        }
    }
    return odd_sum;
}

int main() {
    vector<float> lst;
    // Input elements into the list
    long long odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}