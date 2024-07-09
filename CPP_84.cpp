#include <iostream>
#include <string>
#include <bitset>

using namespace std;

string solve(int N) {
    return bitset<32>(N).to_string();
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "The binary representation of the number is: " << solve(N) << endl;
    return 0;
}