for(auto ch : c)
    {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    
    string result = s;
    string result_str = "False";
    
    if(result == string(result.rbegin(), result.rend()))
    {
        result_str = "True";
    }
    
    return {result, result_str};
}