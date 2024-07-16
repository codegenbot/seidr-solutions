```
def leaders(vector):
    n = len(vector)
    result = [vector[n - 1]]
    
    for i in range(n-2, -1, -1):
        if vector[i] >= vector[i+1]:
            result.insert(0, vector[i])
    
    return result