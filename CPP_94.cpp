```cpp
int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i : lst){
        if(isPrime(i) && i > max_prime){
            max_prime = i;
        }
    }
    int sum = 0;
    while(max_prime > 0){
        sum += max_prime % 10;
        max_prime /= 10;
    }
    return sum;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    assert(skkasdkd({127, 97, 8192}) == 10);
}