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

    if not (planet1 in planets and planet2 in planets):
        return ()

    if index1 > index2:
        index1, index2 = index2, index1

    result = tuple(planets[i] for i in range(index1 + 1, index2))
    return result