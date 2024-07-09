string decode_cyclic(string s){ 
    int l=s.length();
    string x,output;
    int i;
    for (i=0;i*3<l;i++)
    {
        x=s.substr(i*3,3);
        if (x.length()==3) x=x.substr(2)+x[0];
        else if (x.length()==2) x=x[1]+x[0];
        output=output+x;
    }
    return output;
}