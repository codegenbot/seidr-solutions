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

    index1 = positions[planet1]
    index2 = positions[planet2]

    result = tuple(
        [planets[i] for i in range(min(index1, index2) + 1, max(index1, index2))]
    )

    if index1 > index2:
        result = tuple(reversed(result))

    return result