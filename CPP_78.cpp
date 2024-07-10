using namespace std;

int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c >= 'A' && c <= 'F') 
            c = c - 'A' + 10; // convert A-F to 10-15
        else if (isdigit(c)) 
            c -= '0';
        
        if (stoi(string(1, c)) > 1 && isPrime(stoi(string(1, c)))) {
            count++;
        }
    }
    return count;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 || stoi(string(1, '0') + to_string(i)) > n)
            return false;
    }
    return true;
}