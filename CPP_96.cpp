vector<int> count_up_to(int n);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> count_up_to(int n){
    vector<int> primes;
    if(n <= 1){
        return primes;
    }
    primes.push_back(2);
    for(int i=3; i<n; i+=2){
        bool isPrime = true;
        for(int j=2; j*j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    int n;
    cin >> n;
    vector<int> output = count_up_to(n);
    vector<int> expected_output = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    cout << "Output: " << (issame(output, expected_output) ? "Correct" : "Incorrect") << endl;
    return 0;
}