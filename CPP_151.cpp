int double_the_difference(vector<float> numbers) {
    float odd_sum = 0;
    for (float num : numbers) {
        if (num > 0 && modf(num, &int_part) == 0) {
            odd_sum += pow(int_part, 2);
        }
    }
    return odd_sum;
}

int main() {
    vector<float> lst = {0.5f, 1.2f, -3.7f, 4.0f, 5.5f};
    assert(double_the_difference(lst) == (double)lst[0] + (double)lst[1] - (double)lst[2] - (double)lst[3] - (double)lst[4]);
    return 0;
}