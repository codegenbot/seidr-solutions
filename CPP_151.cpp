/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    if (!lst.size()) return 0;
    int sum = 0;
    for (int i = 0; i < lst.size(); i++)
        if (fabs(lst[i]-long(lst[i])) < .0000001)
            if (lst[i] > 0 && lst[i] % 2)
                sum += lst[i]*lst[i];
    return 2*sum;
}

int main(){
    int n;
    scanf("%d",&n);
    vector<float> lst(n);
    for (int i = 0; i < n; i++) scanf("%f",&lst[i]);
    printf("%d\n",double_the_difference(lst));
}
