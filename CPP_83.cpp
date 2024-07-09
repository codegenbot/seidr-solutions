#include<string>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; ; i++) {
        string s = to_string(i);
        if (s.length() == n && (s[0] == '1' || s.back() == '1'))
            count++;
        if (i >= pow(10, n))
            break;
    }
    return count;
}