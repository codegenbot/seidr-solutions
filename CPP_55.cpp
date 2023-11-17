/*
Return n-th Fibonacci number.
>>> fib(10)
55
>>> fib(1)
1
>>> fib(8)
21
*/
#include<stdio.h>
using namespace std;
/*
A number is Fibonacci number if and only if one or both of (5*n^2 + 4) or (5*n^2 – 4) is a perfect square.
for any square no k^2 other perfect square is 3*k^2 + 1 or 3*k*-1.
*/
bool isPerfectSquare(int x){
	int s = sqrt(x);
	return ( s*s == x);	
}
bool isFibonacci(int n){
		return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}
int main() {
	int i;
	cout << "Enter a number: ";
	cin >> i;
	if(isFibonacci(i)) cout << "Is a fibonacci number." << endl;
	else cout << "Is not a Fibonacci number." << endl;
	return 0;
}
