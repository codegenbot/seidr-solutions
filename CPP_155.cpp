#include <string>
#include <vector>

using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> result;
    int count_even = 0;
    int count_odd = 0;
    
    if (num < 0) {
        num = -num; // convert to positive
    }
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            count_even++;
        else
            count_odd++;
        num /= 10;
    }
    
    result.push_back(count_even);
    result.push_back(count_odd);
    
    return result;
}