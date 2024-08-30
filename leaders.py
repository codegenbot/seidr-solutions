Here is the completed code:

def leaders(vector):
    if not vector:
        return []
    
    leaders = [vector[-1]]
    
    for i in range(len(vector)-2, -1, -1):
        if vector[i] >= vector[-1]:
            leaders.append(vector[i])
        else:
            break
            
    return reversed(leaders)