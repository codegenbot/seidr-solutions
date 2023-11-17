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
	vector<int> ret;
	int cnt_even = 0, cnt_odd = 0;
	// TODO: Complete the following code given the task description and function signature.
	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		int len = s.length();
		bool flag = true;
		for (int j = 0; j < len / 2; j++) {
			if (s[j] != s[len - j - 1]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			if (len % 2 == 0)
				cnt_even++;
			else
				cnt_odd++;
		}
	}
	ret.push_back(cnt_even);
	ret.push_back(cnt_odd);
	return ret;
}
int main() {
	int n;
	scanf("%d", &n);
	vector<int> ret = even_odd_palindrome(n);
	printf("%d %d\n", ret[0], ret[1]);
	return 0;
}
