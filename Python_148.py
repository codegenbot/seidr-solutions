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
    if index1 < 0 or index1 > len(planets) - 1:
        return ()
    index2 = planets.index(planet2)
    if index2 < 0 or index2 > len(planets) - 1:
        return ()
    result = tuple(
        [planets[i] for i in range(min(index1, index2), max(index1, index2))]
    )
    return result