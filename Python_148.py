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
    if planet1 not in planets or planet2 not in planets:
        return ()
    index1 = planets.index(planet1)
    index2 = planets.index(planet2)
    result = tuple(
        planets[i] for i in range(max(0, index1), min(index2 + 1, len(planets)))
    )
    return result