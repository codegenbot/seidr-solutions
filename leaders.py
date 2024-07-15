def leaders(input):  
    n = len(input) 
    leader = [input[n-1]] 
    for i in range(n-2, -1, -1): 
        if input[i] >= max(input[i+1:n]): 
            leader.insert(0, input[i]) 
    return leader