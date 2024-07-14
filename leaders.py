Here is the solution:

def leaders(input):
    n = len(input)
    leaders_vector = [input[n-1]]
    
    for i in range(n-2, -1, -1):
        if input[i] >= input[i+1]:
            leaders_vector.insert(0, input[i])
            
    return leaders_vector