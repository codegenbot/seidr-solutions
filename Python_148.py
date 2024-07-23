```
def bf(planet1, planet2):
    planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
    planet_order = {'Mercury': 0, 'Venus': 1, 'Earth': 2, 'Mars': 3, 'Jupiter': 4, 'Saturn': 5, 'Uranus': 6, 'Neptune': 7}
    
    if planet1 not in planets or planet2 not in planets:
        return ()
    
    index1 = planet_order[planet1]
    index2 = planet_order[planet2]
    
    result = []
    
    for i in range(index1 + 1, index2):
        result.append(planets[i])
    
    if index1 > index2:
        result = planets[:index1] + planets[index2:]
    
    return tuple(result)