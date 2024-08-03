```cpp
int main() {
    vector<float> lst;
    long long double_the_difference(vector<float> input_list) {
        long long sum = 0;
        for (float x : input_list) {
            if (x > 0 && modf(x, &x) == 0) {
                sum += pow(x, 2);
            }
        }
        return sum;
    }
    int odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}