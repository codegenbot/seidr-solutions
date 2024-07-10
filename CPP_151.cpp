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
    float num;

    cout << "Enter numbers (enter -1 to stop):" << endl;
    while ((cin >> num) && (num != -1)) {
        lst.push_back(num);
    }

    long long odd_sum = 0;
    for (float n : lst) {
        if (n > 0 && floor(n) == n) { 
            odd_sum += pow(n, 2);
        }
    }

    cout << "The sum of squares of odd numbers is: " << double_the_difference(lst) << endl;

    return 0;
}