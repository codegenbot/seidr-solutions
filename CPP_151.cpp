```cpp
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && (int)x == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst;
    float input;
    while (cin >> input) {
        lst.push_back(input);
    }
    long long odd_sum = double_the_difference(lst);
    cout << "The difference is: " << odd_sum << endl;
    return 0;
}