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

    if index1 > len(planets) or index2 > len(planets):
        return ()

    result = tuple(
        [p for p in planets[index1 : index2 + 1] if p != planet1 and p != planet2]
    )
    return result