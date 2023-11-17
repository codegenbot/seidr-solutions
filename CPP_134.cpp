/*
Create a function that returns true if the last character
of a given string is an alphabetical character and is not
a part of a word, and false otherwise.
Note: "word" is a group of characters separated by space.

Examples:
check_if_last_char_is_a_letter("apple pie") ➞ false
check_if_last_char_is_a_letter("apple pi e") ➞ true
check_if_last_char_is_a_letter("apple pi e ") ➞ false
check_if_last_char_is_a_letter("") ➞ false 
*/
#include<stdio.h>
#include<string>
using namespace std;
bool check_if_last_char_is_a_letter(string txt){
	int i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,u=0,v=0,w=0,x=0,y=0,z=0;
	for(int i=0;i<txt.length();i++){
		if(txt[i]=='a'||txt[i]=='A'){
			a++;
		}
		if(txt[i]=='b'||txt[i]=='B'){
			b++;
		}
		if(txt[i]=='c'||txt[i]=='C'){
			c++;
		}
		if(txt[i]=='d'||txt[i]=='D'){
			d++;
		}
		if(txt[i]=='e'||txt[i]=='E'){
			e++;
		}
		if(txt[i]=='f'||txt[i]=='F'){
			f++;
		}
		if(txt[i]=='g'||txt[i]=='G'){
			g++;
		}
		if(txt[i]=='h'||txt[i]=='H'){
			h++;
		}
		if(txt[i]=='i'||txt[i]=='I'){
			i++;
		}
		if(txt[i]=='j'||txt[i]=='J'){
			j++;
		}
		if(txt[i]=='k'||txt[i]=='K'){
			k++;
		}
		if(txt[i]=='l'||txt[i]=='L'){
			l++;
		}
		if(txt[i]=='m'||txt[i]=='M'){
			m++;
		}
		if(txt[i]=='n'||txt[i]=='N'){
			n++;
		}
		if(txt[i]=='o'||txt[i]=='O'){
			o++;
		}
		if(txt[i]=='p'||txt[i]=='P'){
			p++;
		}
		if(txt[i]=='q'||txt[i]=='Q'){
			q++;
		}
		if(txt[i]=='r'||txt[i]=='R'){
			r++;
		}
		if(txt[i]=='s'||txt[i]=='S'){
			s++;
		}
		if(txt[i]=='t'||txt[i]=='T'){
			t++;
		}
		if(txt[i]=='u'||txt[i]=='U'){
			u++;
		}
		if(txt[i]=='v'||txt[i]=='V'){
			v++;
		}
		if(txt[i]=='w'||txt[i]=='W'){
			w++;
		}
		if(txt[i]=='x'||txt[i]=='X'){
			x++;
		}
		if(txt[i]=='y'||txt[i]=='Y'){
			y++;
		}
		if(txt[i]=='z'||txt[i]=='Z'){
			z++;
		}
	}
	if(txt[txt.length()-1]==' '){
		return false;
	}
	if(a>0||b>0||c>0||d>0||e>0||f>0||g>0||h>0||i>0||j>0||k>0||l>0||m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0||w>0||x>0||y>0||z>0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	string txt;
	getline(cin,txt);
	if(check_if_last_char_is_a_letter(txt)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
