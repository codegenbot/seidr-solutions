/*
Return vector with elements incremented by 1.
>>> incr_vector({1, 2, 3})
{2, 3, 4}
>>> incr_vector({5, 3, 5, 2, 3, 3, 9, 0, 123})
{6, 4, 6, 3, 4, 4, 10, 1, 124}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> incr_list(vector<int> l){
	vector<int>::iterator i;
	for(i=l.begin();i<l.end();i++){
		*i+=1;
	}
	return l;
}
int main(){
	vector<int> l={1,2,3};
	vector<int>::iterator i;
	for(i=l.begin();i<l.end();i++){
		printf("%d ",*i);
	}
	printf("\n");
	l=incr_list(l);
	for(i=l.begin();i<l.end();i++){
		printf("%d ",*i);
	}
	printf("\n");
	return 0;
}
