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

    if index1 < 0 or index2 < 0:
        return ()

    result = tuple(
        planets[i] for i in range(max(0, index1 - 1), min(index2 + 1, len(planets)))
    )

    return result