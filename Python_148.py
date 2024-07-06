```
def bf(planet1, planet2):
    planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
    positions = {'Mercury': 0, 'Venus': 1, 'Earth': 2, 'Mars': 3, 'Jupiter': 4, 'Saturn': 5, 'Uranus': 6, 'Neptune': 7}
    
    if planet1 not in planets or planet2 not in planets:
        return ()
    
    p1_index = positions[planet1]
    p2_index = positions[planet2]
    
    result = []
    for i in range(p1_index + 1, p2_index):
        result.append(planets[i])
    
    if p1_index > p2_index:
        result = planets[:p1_index][::-1] + result
    elif p1_index < p2_index:
        result += planets[p1_index + 1:p2_index]
    
    return tuple(result)