int main() {
    vector<float> lst = {1.5f, 2.0f, -3.25f};
    long long result = double_the_difference(lst);
    assert(result == 4); // 1^2 + 2^2 = 1 + 4 = 5
    return 0;
}