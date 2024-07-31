#include <iostream>
#include <vector>
using namespace std;

int solutions(vector<int> numbers) {
    int sum = 0;
    for (char c : numbers) {
        if (c == ' ') break; 
        sum += c - '0';
    }
    return sum;
}

int main() {
    cout << "Sum of odd numbers: " << solutions({3, 13, 2, 9}) << endl;
}