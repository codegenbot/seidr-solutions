def bf(planet1, planet2):
    planets = [
        "Mercury",
        "Venus",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        "Uranus",
        "Neptune",
    ]
    
    index1 = None
    index2 = None
    
    if planet1 in planets:
        index1 = planets.index(planet1)
    if planet2 in planets:
        index2 = planets.index(planet2)

    if index1 is None or index2 is None:
        return ()

    result = tuple(planets[i] for i in range(max(0, min(index1, index2)), max(index1, index2) + 1))

    return result