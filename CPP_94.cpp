int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> lst(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> lst[i];
    }
    cout << "The maximum prime number is " << skjkasdkd(lst) << endl;
    return 0;
}

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int num : lst){
        if(isPrime(num) && num > max_prime)
            max_prime = num;
    }
    return sumOfDigits(max_prime);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}