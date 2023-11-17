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
    vector <int> count(2);
    if (num < 0)
        num *= -1;
    if (num == 0)
        count[0] = 1;
    else {
        while (num != 0) {
            int x = num % 10;
            if (x % 2 == 0)
                count[0]++;
            else
                count[1]++;
            num /= 10;
        }
    }
    return count;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    vector<int> count = even_odd_count(num);
    printf("Even digits: %d\nOdd digits: %d", count[0], count[1]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
