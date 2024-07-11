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

    if planet1 not in planets or planet2 not in planets:
        return ()

    if index1 > index2:
        index1, index2 = index2, index1

    return tuple(planets[index1 + 1 : index2])