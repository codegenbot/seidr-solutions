#include <string>
#include <vector>

using namespace std;

vector<int> even_odd_count(int num) {
    int even = 0;
    int odd = 0;

    string strNum = to_string(abs(num)); // convert number to string and take absolute value

    for (char c : strNum) {
        if (stoi(string(1, c)) % 2 == 0)
            even++;
        else
            odd++;
    }

    return {even, odd};
}