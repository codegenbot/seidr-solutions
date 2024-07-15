def leaders(input):
    n = len(input)
    leaders = [input[n-1]]
    
    for i in range(n-2, -1, -1):
        if input[i] >= input[i+1]:
            leaders.insert(0, input[i])
            
    return leaders