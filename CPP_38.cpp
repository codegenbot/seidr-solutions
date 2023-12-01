string encode_cyclic(string s){
    int l=s.length();
    int num=(l+2)/3;
    string x,output;
    int i;
    for (i=0;i< num; i++)
    {
        x=s.substr(i*3,3);
        if (x.length()<3) 
        {
            for(int j=x.length();j<3;j++) 
            {
                x+='0';  //padding with zeros
            }
        }
        x=x[2]+x.substr(0,2);
        output+=x;
    }
    return output;
}

string decode_cyclic(string s){
    int l=s.length();
    int num=(l)/3;
    string x,output;
    int i;
    for (i=0;i< num; i++)
    {
        x=s.substr(i*3,3);
        x=x[1]+x.substr(2,2)+x[0];
        output+=x;
    }
    return output;
}