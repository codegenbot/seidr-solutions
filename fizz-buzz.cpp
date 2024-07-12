Here is the solution:

int main() {
    int n;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
        cout << "FizzBuzz";
    else if (n % 3 == 0)
        cout << "Fizz";
    else if (n % 5 == 0)
        cout << "Buzz";
    else
        cout << to_string(n);
    return 0;
}