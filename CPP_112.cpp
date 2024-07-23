string result;
    for(int i=0;i<s.length();i++)
    {
        if(c.find(s[i]) == string::npos)
        {
            result += s[i];
        }
    }

    string reversed = result;
    reverse(reversed.begin(),reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}