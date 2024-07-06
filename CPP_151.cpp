long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (auto x : lst) {
        if (x >= 0 && (int)x == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float input;
    while (true) {
        cin >> input;
        lst.push_back(input);
        char c;
        cin >> c;
        if (c == 'q') break;
    }
    long long odd_sum = 0;
    for (float x : lst) {
        if (x >= 0 && (int)x == x) {
            odd_sum += pow(x, 2);
        }
    }
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}