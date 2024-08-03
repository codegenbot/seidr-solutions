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
    index_planet1 = planets.index(planet1)
    index_planet2 = planets.index(planet2)

    if planet1 not in planets or planet2 not in planets:
        return ()

    result = tuple(planets[index_planet1 + 1 : index_planet2])
    return result