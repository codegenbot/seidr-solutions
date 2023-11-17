/*
Given a positive integer n, return a vector that has the number of even and odd
integer palindromes that fall within the range(1, n), inclusive.

Example 1:

    Input: 3
    Output: (1, 2)
    Explanation:
    Integer palindrome are 1, 2, 3. one of them is even, and two of them are odd.

Example 2:

    Input: 12
    Output: (4, 6)
    Explanation:
    Integer palindrome are 1, 2, 3, 4, 5, 6, 7, 8, 9, 11. four of them are even, and 6 of them are odd.

Note:
    1. 1 <= n <= 10^3
    2. returned vector has the number of even and odd integer palindromes respectively.
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
bool is_palindrome(int n);
vector<int> even_odd_palindrome(int n){
    vector<int> result;
    int even = 0, odd = 0;
    for(int i = 1; i <= n; i++){
        if(is_palindrome(i)){
            if(i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    result.push_back(even);
    result.push_back(odd);
    return result;
}

bool is_palindrome(int n){
    string s = to_string(n);
    int i = 0, j = s.size() - 1;
    while(i < j){
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

// int main(){
//     int n;
//     scanf("%d", &n);
//     vector<int> result = even_odd_palindrome(n);
//     printf("%d %d\n", result[0], result[1]);
//     return 0;
// }
