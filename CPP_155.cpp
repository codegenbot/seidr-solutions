#include<string>
#include<vector>
using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> result;
    int n = abs(num);
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 0)
            result.push_back(1);
        else
            result.push_back(0);
        n /= 10;
    }
    return result;
}