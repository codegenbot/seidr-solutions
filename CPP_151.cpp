int main() {
    vector<float> lst;
    long long odd_sum = 0;
    cout << "Enter numbers separated by space: ";
    for (char c; cin >> c && c != '\n'; ) {}
    cin >> noskipws;
    for (float num; cin >> num;) {
        lst.push_back(num);
    }
    cout << "Sum of squares of positive integer roots: " << double_the_difference(lst) << endl;
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}