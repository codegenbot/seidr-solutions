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
    positions = {
        "Mercury": 0,
        "Venus": 1,
        "Earth": 2,
        "Mars": 3,
        "Jupiter": 4,
        "Saturn": 5,
        "Uranus": 6,
        "Neptune": 7,
    }

    if planet1 not in planets or planet2 not in planets:
        return ()

    i = positions[planet1]
    j = positions[planet2]

    if i > j:
        i, j = j, i

    result = [planets[k] for k in range(i + 1, j)]
    return tuple(result)