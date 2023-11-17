#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;

vector<int> even_odd_count(int num){
int arr[2] = {0, 0};
    if(num < 0) num *= -1;
    while(num != 0){
        if(num % 2 == 0) arr[0]++;
        else arr[1]++;
        num /= 10;
    }
    return vector<int>(arr, arr + 2);
}
