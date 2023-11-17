/*
prime_fib returns n-th number that is a Fibonacci number and it's also prime.
>>> prime_fib(1)
2
>>> prime_fib(2)
3
>>> prime_fib(3)
5
>>> prime_fib(4)
13
>>> prime_fib(5)
89
*/
#include <ostream>
using namespace std;
int prime_fib(int n){
	int i=2;
	int fib=0;
	int j=0;
	int count=0;
	while(count<n){
		if(i%2==0){
			fib=fib+i;
			}
		else{
			for(int j=3;j<=i;j++){
				if(i%j==0){
					break;
					}
				if(j==i){
					fib=fib+i;
					count++;
					}
				}
			}
		i++;
		}
	return fib;
	}
int main(){
	int n;
	cin>>n;
	cout<<prime_fib(n)<<endl;
	return 0;
	}
