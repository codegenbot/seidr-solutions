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

    int i=0,count=0;
    for(i=0;i<text.length();i++)
    {
        if(text[i]==' ')
        {
            count++;
            if(count>2)
            {
                text[i]='-';
            }
            else
            {
                text[i]='_';
            }
        }
        else
        {
            count=0;
        }
    }
    return text;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<fix_spaces(s);
}
