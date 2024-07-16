int main() {
    int x;
    cin >> x;
    
    if (x % 3 == 0 && x % 5 == 0) {
        cout << "FizzBuzz";
    } else if (x % 3 == 0) {
        cout << "Fizz";
    } else if (x % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << to_string(x);
    }
    
    return 0;
}