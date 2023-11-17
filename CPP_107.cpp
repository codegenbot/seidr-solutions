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
vector<int> even_odd_palindrome(int n){
    vector<int> result;
    int even = 0, odd = 0;
    for(int i = 1; i <= n; i++){
        string str = to_string(i);
        int len = str.length();
        bool is_palindrome = true;
        for(int j = 0; j < len / 2; j++){
            if(str[j] != str[len - 1 - j]){
                is_palindrome = false;
                break;
            }
        }
        if(is_palindrome){
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
int main(){
    int n;
    scanf("%d", &n);
    vector<int> result = even_odd_palindrome(n);
    for(int i = 0; i < result.size(); i++)
        printf("%d ", result[i]);
    return 0;
}
