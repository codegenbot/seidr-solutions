#include <initializer_list>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

size_t max_prime_sum(vector<int> lst){
    size_t maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    size_t sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

int solve(int n, vector<int> lst){
    int total = 0;
    for(int i : lst){
        total += i;
    }
    if(total == 0) return 0;
    size_t maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    vector<int> lst;
    for(int i = 0; i < n; i++){
        int num;
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        lst.push_back(num);
    }
    int result = solve(n, lst);
    cout << "The maximum prime number in the list is: " << result << endl;
    return 0;