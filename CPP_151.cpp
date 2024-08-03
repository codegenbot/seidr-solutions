int main() {
    vector<float> lst;
    long long odd_sum = 0;
    cout << "Enter numbers (negative to stop): ";
    while (true) {
        float num;
        cin >> num;
        if (num < 0) break;
        if (num > 0 && floor(num) == num) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                odd_sum += pow(num, 2);
            }
        }
    }
    cout << "The difference is: " << odd_sum << endl;
}