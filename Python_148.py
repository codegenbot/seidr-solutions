```
def bf(planet1, planet2):
    planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
    index1 = -1
    index2 = -1
    
    for i in range(len(planets)):
        if planets[i] == planet1:
            index1 = i
        elif planets[i] == planet2:
            index2 = i
            
    if index1 < 0 or index2 < 0:
        return ()
    
    if index1 > index2:
        index1, index2 = index2, index1
    
    result = []
    for i in range(index1 + 1, index2):
        result.append(planets[i])
        
    return tuple(result)