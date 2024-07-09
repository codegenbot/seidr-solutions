#include<string>
#include<vector>
using namespace std;

vector<int> even_odd_count(int num) {
    int countEven = 0;
    int countOdd = 0;
    
    if(num < 0) num = -num; // convert to positive for simplicity
    
    do {
        int digit = num % 10;
        (digit % 2 == 0 ? ++countEven : ++countOdd);
        num /= 10;
    } while (num > 0);

    vector<int> result({countEven, countOdd});
    return result;
}