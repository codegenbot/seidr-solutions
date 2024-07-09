int main() {
    int max_prime = 0;
    vector<int> lst;
    cout << "Enter numbers separated by spaces: ";
    for(string s; cin >> s;){
        lst.push_back(stoi(s));
    }
    int sum_of_digits = skjkasdkd(lst);
    cout << "Sum of digits is: " << sum_of_digits << endl;
    return 0;
}

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i : lst){
        if(isPrime(i) && i > max_prime)
            max_prime = i;
    }
    int sum_of_digits = 0;
    while(max_prime > 0){
        sum_of_digits += (max_prime % 10);
        max_prime /= 10;
    }
    return sum_of_digits;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}