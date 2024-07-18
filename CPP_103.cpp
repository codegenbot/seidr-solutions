if(n > m)
        return "-1";
    
    int sum = 0;
    for(int i = n; i <= m; i++)
        sum += i;
        
    int average = round((double)sum / (m - n + 1));
    
    return bitset<8>(average).to_string().substr(0, 5);  
}