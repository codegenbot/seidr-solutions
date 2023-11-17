#include<stdio.h>
#include<string>
#include <iostream>
#include <ostream>
using namespace std;
bool prime_length(string str){
	int len = str.length();
	bool prime = true;
	for(int i = 2; i < len; i++){
		if(len % i == 0){
			prime = false;
			break;
		}
	}
	return prime;
}
int main(void){
	string str;
	cin >> str;
	if(prime_length(str)){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}
	return 0;
}
