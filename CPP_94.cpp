Here is the completed code:

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largest_prime(vector<int> lst) {
    int max_prime = 0;
    for (int num : lst) {
        if (is_prime(num)) {
            max_prime = num;
            break;
        }
    }
    return max_prime;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> lst;
    // Read input here...
    int max_prime = largest_prime(lst);
    int sum = sum_of_digits(max_prime);
    return 0;
}