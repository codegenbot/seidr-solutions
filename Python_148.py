```
def bf(planet1, planet2):
    planets = ['Mercury', 'Venus', 'Earth', 'Mars', 'Jupiter', 'Saturn', 'Uranus', 'Neptune']
    index1 = planets.index(planet1)
    if index1 == -1 or index2 == -1:
        return ()
    index2 = planets.index(planet2)
    start_index = max(0, min(index1, index2))
    end_index = min(len(planets), max(start_index + 1, index2))
    return tuple(sorted([planets[i] for i in range(start_index, end_index)]))