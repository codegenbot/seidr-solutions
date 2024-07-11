```
def bf(planet1, planet2):
    planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
    index1 = None
    index2 = None
    
    for i in range(len(planets)):
        if planet1 == planets[i]:
            index1 = i
        elif planet2 == planets[i]:
            index2 = i

    if index1 is None or index2 is None:
        return ()

    result = []
    for i in range(index1 + 1, index2):
        result.append(planets[i])

    return tuple(result)