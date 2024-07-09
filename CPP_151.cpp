int main() {
    vector<float> lst = {1.0f, 2.5f, 3.0f, 4.25f};
    long long result = double_the_difference(lst);
    int odd_sum = (int)result;
    assert(result == (long long)odd_sum);
}