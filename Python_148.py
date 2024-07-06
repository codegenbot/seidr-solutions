
def bf(planet1, planet2):
    planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
    try:
        i1 = planets.index(planet1)
        i2 = planets.index(planet2)
    except ValueError:
        return ()
    if i1 > i2:
        i1, i2 = i2, i1
    return tuple(planets[i1+1:i2])