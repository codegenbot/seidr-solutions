#include <iostream>
#include <vector>

vector<int> even_odd_count(int num) {
    int evenCount = 0;
    int oddCount = 0;

    // Convert the number to a string
    string numStr = to_string(abs(num));

    // Count the number of even and odd digits
    for (char digit : numStr) {
        int num = digit - '0';
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    return {evenCount, oddCount};
}