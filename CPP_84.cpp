#include <iostream>
using namespace std;

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}

int main() {
    std::string str; 
    cin >> str;
    int N = stoi(str);
    if(N < 1) {
        cout << "Error: Input should be a positive integer." << endl;
    } else {
        cout << solve(N) << endl;
        assert(solve(963) == 1010);
    }
    return 0;
}