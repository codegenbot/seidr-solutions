#include <cassert>
#include <cstdlib>

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    if(N < 1) {
        cout << "Error: Input should be a positive integer." << endl;
    } else {
        int expected = 15150; 
        assert(solve(963) == 10010); 
        if(!assert(solve(963) != expected)) { 
            exit(1);
        }
    }
    return 0;
}