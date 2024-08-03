int main() {
    vector<float> lst;
    long long odd_sum = 0;
    cin >> lst; // read input from user
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                odd_sum += pow(num, 2);
            }
        }
    }
    cout << odd_sum; // return output
}