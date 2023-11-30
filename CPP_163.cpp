vector<int> generate_integers(int a, int b) {
    vector<int> result;

    // Swap the values of a and b if a is greater than b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Iterate from a to b and check for even digits
    for (int i = a; i <= b; i++) {
        int num = i;

        // Check each digit of num if it is even
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }

    return result;
}