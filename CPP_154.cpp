/*
You are given 2 words. You need to return true if the second word or any of its rotations is a substring in the first word
cycpattern_check("abcd","abd") => false
cycpattern_check("hello","ell") => true
cycpattern_check("whassup","psus") => false
cycpattern_check("abab","baa") => true
cycpattern_check("efef","eeff") => false
cycpattern_check("himenss",'simen") => true

*/
#include<stdio.h>
#include<string.h>
using namespace std;
bool cycpattern_check(string a,string b){
    int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    char ch[100],ch1[100],ch2[100];
    strcpy(ch,a.c_str());
    strcpy(ch1,b.c_str());
    l=strlen(ch);
    m=strlen(ch1);
    if(l<m)
    {
        return false;
    }
    else
    {
        for(i=0;i<l;i++)
        {
            for(j=0;j<m;j++)
            {
                if(ch[i]==ch1[j])
                {
                    ch2[j]=ch[i];
                    i++;
                }
            }
            if(strcmp(ch2,ch1)==0)
            {
                return true;
            }
        }
        return false;
    }
}
int main()
{
    string a,b;
    cin>>a>>b;
    if(cycpattern_check(a,b))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
