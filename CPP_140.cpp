/*
Given a string text, replace all spaces in it with underscores, 
and if a string has more than 2 consecutive spaces, 
then replace all consecutive spaces with - 

fix_spaces("Example") == "Example"
fix_spaces("Example 1") == "Example_1"
fix_spaces(" Example 2") == "_Example_2"
fix_spaces(" Example   3") == "_Example-3"
*/
#include<stdio.h>
#include<string>
using namespace std;
string fix_spaces(string text){
	int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	string a,b,c,d,e,f,g,h,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,a1,b1,c1,d1,e1,f1,g1,h1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1,u1,v1,w1,x1,y1,z1;
	a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z="";
	for(i=0;i<text.length();i++){
		if(text[i]==' '){
			if(text[i+1]==' '){
				if(text[i+2]==' '){
					a=a+"-";
					i=i+2;
				}
				else{
					a=a+"_";
				}
			}
			else{
				a=a+"_";
			}
		}
		else{
			a=a+text[i];
		}
	}
	return a;
}
