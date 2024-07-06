
def bf(planet1, planet2):
    planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
    idx1 = planets.index(planet1)
    idx2 = planets.index(planet2)
    return tuple(sorted(planets[min(idx1, idx2):max(idx1, idx2)]))