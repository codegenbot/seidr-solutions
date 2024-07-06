long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] >= 0 && (int)lst[i] == lst[i]) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    // Input elements into the list
    long long odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}