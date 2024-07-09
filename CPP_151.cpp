int main() {
    vector<float> lst = {0.5f, 1.2f, -3.7f, 4.0f, 5.5f};
    float odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &int_part) == 0) {
            odd_sum += pow(int_part, 2);
        }
    }
    assert(double_the_difference(lst) == odd_sum);
}