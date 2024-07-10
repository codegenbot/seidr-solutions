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
    vector<float> lst;
    cout << "Enter numbers: ";
    while (cin >> lst.back()) {}
    
    long long odd_sum = double_the_difference(lst);

    return 0;
}