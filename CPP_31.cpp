```c++
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (is_prime(num)) {
        cout << num << " is prime." << endl;
    } else {
        cout << num << " is not prime." << endl;
    }

    return 0;
}

bool is_prime(long long n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n || i == n; i++){
        if(n%i == 0) return false;
    }
    return true;
}