```cpp
vector<float> lst = {1.5f, 2.0f, -3.25f, 4.0f};
int odd_sum = 0;
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}
int main() {
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}