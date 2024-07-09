#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int count_even = 0;
    int count_odd = 0;

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        if (str == std::to_string(stoi(str)) && !str.empty())
            if (stoi(str) % 2 == 0)
                count_even++;
            else
                count_odd++;
    }

    result[0] = count_even;
    result[1] = count_odd;

    return result;