```c++
#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 10; i <= n * 10; i++) {
        if (i % 10 == 1 || i / 10 == 1) {
            count++;
        }
    }
    return count;
}

int main 
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0) {
        cout << "The count of the numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    } else {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }
    return 0;
}