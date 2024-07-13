int main() {
    vector<float> lst = {1.5f, 2.0f, -3.25f, 4.0f, -5.5f};
    long long result = double_the_difference(lst);
    assert(result == 15);
    return 0;
}