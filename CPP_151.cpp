int main() {
    vector<float> lst = {1.2f, -3.4f, 5.6f, 0.7f, -8.9f};
    float odd_sum = 0;
    assert(double_the_difference(lst) == (pow(fmod(1.2, 1), 2) + pow(fmod(-3.4, 1), 2) + pow(fmod(5.6, 1), 2)));
}