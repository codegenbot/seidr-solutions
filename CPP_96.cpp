bool issame(int a, int b){
    return a == b;
}

vector<int> count_up_to(int n);

int main() {
    int num;
    cin >> num;
    vector<int> result = count_up_to(num);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}

vector<int> count_up_to(int n){
    vector<int> primes;
    for(int i = 2; i < n; ++i){
        bool is_prime = true;
        for(int j = 2; j*j <= i; ++j){
            if(i % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            primes.push_back(i);
        }
    }
    return primes;
}