```
def bf(planet1, planet2):
    planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
    if planet1 and planet2 in planets:
        index1 = planets.index(planet1)
        index2 = planets.index(planet2)
        if 0 <= index1 < index2 < len(planets):
            return tuple(sorted([planets[i] for i in range(index1+1, index2)]))
        elif index1 > index2:
            return tuple(sorted([planets[i] for i in range(index2+1, index1)]))
        else:
            return ()
    else:
        return ()