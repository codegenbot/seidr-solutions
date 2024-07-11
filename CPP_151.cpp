int main() {
    vector<float> lst;
    long long odd_sum;
    int result = double_the_difference(lst);
    cout << "The sum of the squares of all positive integers in the list is: " << result << endl;
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            if (num % 2 != 0) { // check if number is odd
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}