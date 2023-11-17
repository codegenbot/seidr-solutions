/*
You are given a word. Your task is to find the closest vowel that stands between 
two consonants from the right side of the word (case sensitive).

Vowels in the beginning and ending doesn't count. Return empty string if you didn't
find any vowel met the above condition. 

You may assume that the given string contains English letter only.

Example:
get_closest_vowel("yogurt") ==> "u"
get_closest_vowel("FULL") ==> "U"
get_closest_vowel("quick") ==> ""
get_closest_vowel("ab") ==> ""
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string get_closest_vowel(string word){
	int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	string a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	a="a";
	b="e";
	c="i";
	d="o";
	e="u";
	f="A";
	g="E";
	h="I";
	i="O";
	j="U";
	k=word.length();
	l=0;
	m=0;
	n=0;
	o=0;
	p=0;
	q=0;
	r=0;
	s=0;
	t=0;
	u=0;
	v=0;
	w=0;
	x=0;
	y=0;
	z=0;
	for(i=0;i<k;i++)
	{
		if(word[i]==a[0]||word[i]==b[0]||word[i]==c[0]||word[i]==d[0]||word[i]==e[0]||word[i]==f[0]||word[i]==g[0]||word[i]==h[0]||word[i]==i[0]||word[i]==j[0])
		{
			l=i;
			break;
		}
	}
	for(i=k-1;i>=0;i--)
	{
		if(word[i]==a[0]||word[i]==b[0]||word[i]==c[0]||word[i]==d[0]||word[i]==e[0]||word[i]==f[0]||word[i]==g[0]||word[i]==h[0]||word[i]==i[0]||word[i]==j[0])
		{
			m=i;
			break;
		}
	}
	for(i=l;i<m;i++)
	{
		if(word[i]==a[0]||word[i]==b[0]||word[i]==c[0]||word[i]==d[0]||word[i]==e[0]||word[i]==f[0]||word[i]==g[0]||word[i]==h[0]||word[i]==i[0]||word[i]==j[0])
		{
			n=i;
			break;
		}
	}
	for(i=m;i>=l;i--)
	{
		if(word[i]==a[0]||word[i]==b[0]||word[i]==c[0]||word[i]==d[0]||word[i]==e[0]||word[i]==f[0]||word[i]==g[0]||word[i]==h[0]||word[i]==i[0]||word[i]==j[0])
		{
			o=i;
			break;
		}
	}
	if(n==0&&o==0)
	{
		return "";
	}
	else if(n==0)
	{
		return word[o];
	}
	else if(o==0)
	{
		return word[n];
	}
	else
	{
		p=m-n;
		q=o-l;
		if(p<q)
		{
			return word[n];
		}
		else
		{
			return word[o];
		}
	}
}
