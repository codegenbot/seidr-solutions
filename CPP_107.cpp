#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool isEven = false;
        if (str == std::string(str.rbegin(), str.rend())) 
            isEven = (i % 2 == 0);
        else
            isEven = (i % 2 != 0);
        if (isEven)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}