#include<string>
#include<vector>
using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    int n = abs(num); // convert to positive for simplicity
    
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        n /= 10;
    }
    
    return result;
}