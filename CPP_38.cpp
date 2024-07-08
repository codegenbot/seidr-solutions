#include<string>
using namespace std;

string encode_cyclic(string s){ 
    int l=s.length();
    int num=(l+2)/3;
    string x,output;
    int i;
    for (i=0;i*3<l;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x.substr(1)+x[0];
        output=output+x;
    }
    return output;
}

string decode_cyclic(string s){ 
    string result;
    int i=0;
    while(i<s.length()){
        if(s[i] == ' ')i++;
        else{
            int j;
            for(j=i;j<s.length() && (s[j]-'a'+1)%3!=0;j++);
            result+=s.substr(i,j-i+1);
            i=j+1;
        }
    }
    return result;
}