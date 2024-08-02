Here is the solution:

def leaders(vector):
    n = len(vector)
    leaders_vector = [vector[n-1]]
    
    for i in range(n-2,-1,-1):
        if vector[i] >= vector[i+1]:
            leaders_vector.insert(0, vector[i])
            
    return leaders_vector