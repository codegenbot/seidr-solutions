```
def bf(planet1, planet2):
    planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
    index1 = planets.index(planet1)
    if index1 == -1:
        return ()
    index2 = planets.index(planet2)
    if index2 == -1:
        return ()
    start_index = max(index1, 0)
    end_index = min(index2 + 1, len(planets))
    return tuple(planets[i] for i in range(start_index, end_index))