#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	while(getline(cin,str)){
		cout<<flip_case(str)<<endl;
	}
	return 0;
}
