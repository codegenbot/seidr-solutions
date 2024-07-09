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
        [
            planet
            for planet in planets[index1 : index2 + 1]
            if planet not in (planet1, planet2)
        ]
    )

    return result