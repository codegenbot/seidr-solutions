/*
Given a string of words, return a vector of words split on whitespace, if no whitespaces exists in the text you
should split on commas ',' if no commas exists you should return a vector with one element, the number of lower-case letters with odd order in the
alphabet, ord("a") = 0, ord("b") = 1, ... ord("z") = 25
Examples
split_words("Hello world!") ➞ {"Hello", "world!"}
split_words("Hello,world!") ➞ {"Hello", "world!"}
split_words("abcdef") == {"3"} 
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> split_words(string txt){
	int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, a, b, c, d, e, f, g, h, i1, j1, k1, l1, m1, n1, o1, p1, q1, r1, s1, t1, u1, v1, w1, x1, y1, z1;
	string a1, b1, c1, d1, e1, f1, g1, h1, i2, j2, k2, l2, m2, n2, o2, p2, q2, r2, s2, t2, u2, v2, w2, x2, y2, z2;
	vector<string>a2;
	a = txt.size();
	for (i = 0; i < a; i++)
	{
		if (txt[i] == ',' || txt[i] == ' ')
		{
			a2.push_back(txt.substr(0, i));
			txt.erase(0, i + 1);
			i = -1;
			a = txt.size();
		}
	}
	if (a2.size() == 0)
	{
		a2.push_back(txt);
	}
	return a2;
}
