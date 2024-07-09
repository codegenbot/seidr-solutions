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
    index1 = planets.index(planet1)
    index2 = planets.index(planet2)

    if index1 > 7 or index2 > 7:
        return ()

    result = tuple(planets[i] for i in range(index1 + 1, min(index2, 8)))
    return result