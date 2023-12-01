#include <vector>

using namespace std;

vector<int> generate_integers(int a, int b);

bool issame(vector<int> a, vector<int> b) {
    vector<int> result1 = generate_integers(a, b);
    vector<int> result2 = generate_integers(b, a);
    return result1 == result2;
}

vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        int num = i;
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