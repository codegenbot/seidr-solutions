```
def bf(planet1, planet2):
    planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
    indices1 = [i for i, x in enumerate(planets) if x == planet1]
    indices2 = [i for i, x in enumerate(planets) if x == planet2]
    
    if not (indices1 and indices2):
        return ()
    
    start_index = min(indices1[0], indices2[0])
    end_index = max(indices1[0], indices2[0])
    
    return tuple([planets[i] for i in range(start_index, end_index+1) if planets[i] != planet1 and planets[i] != planet2])