```
def bf(planet1, planet2):
    planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
    idx1 = planets.index(planet1)
    idx2 = planets.index(planet2)

    if not (0 <= idx1 < len(planets) and 0 <= idx2 < len(planets)):
        return ()

    result = []
    for i in range(idx1 + 1, idx2):
        result.append(planets[i])

    return tuple(result)