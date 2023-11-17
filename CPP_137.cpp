#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include <string>
using namespace std;
int main(){
	char a[100],b[100];
	fgets(a,100,stdin);
	fgets(b,100,stdin);
	int i,j,x,y;
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<x;i++){
		if(a[i]=='.'){
			a[i]=',';
		}
	}
	for(j=0;j<y;j++){
		if(b[j]=='.'){
			b[j]=',';
		}
	}
	float z,m;
	z=atof(a);
	m=atof(b);
	if(z>m){
		printf("%f",z);
	}
	else if(m>z){
		printf("%f",m);
	}
	else{
		printf("None");
	}
}
int main(){
    assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
}
