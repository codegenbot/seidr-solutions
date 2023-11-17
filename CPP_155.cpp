/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
    vector<int> res(2);
    int even = 0, odd = 0;
    if (num == 0) {
        even++;
    }
    while (num != 0) {
        if (abs(num % 10) % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        num /= 10;
    }
    res[0] = even;
    res[1] = odd;
    return res;
}
int main() {
    vector<int> res = even_odd_count(123);
    printf("%d %d\n", res[0], res[1]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
