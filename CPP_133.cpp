/*
You are given a vector of numbers.
You need to return the sum of squared numbers in the given vector,
round each element in the vector to the upper int(Ceiling) first.
Examples:
For lst = {1,2,3} the output should be 14
For lst = {1,4,9} the output should be 98
For lst = {1,3,5,7} the output should be 84
For lst = {1.4,4.2,0} the output should be 29
For lst = {-2.4,1,1} the output should be 6


*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
    //complete the following code
    return;
}

int main(){
    int n;
    cin >> n;
    vector<float> lst;
    for(int i = 0; i < n; i++){
        float num;
        cin >> num;
        lst.push_back(num);
    }
    int res = sum_squares(lst);
    cout << res << endl;
    return 0;
}
int sum_squares(vector<float> lst){
