Here is the solution in Python:

def leaders(a):
    n = len(a)
    leaders_array = [a[n-1]]
    
    for i in range(n-2,-1,-1):
        if a[i] >= a[i+1]:
            leaders_array.insert(0, a[i])
            
    return leaders_array