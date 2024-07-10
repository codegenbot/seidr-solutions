#include <vector>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isEven = i % 2 == 0;
        if (str == reverse(str).str()) {
            if (isEven)
                result[0]++;
            else
                result[1]++;
        }
    }
    return result;
}