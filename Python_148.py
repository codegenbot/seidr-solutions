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

    pos1 = positions[planet1]
    pos2 = positions[planet2]

    result = [
        planets[i]
        for i in range(min(pos1, pos2), max(pos1, pos2))
        + list(range(max(pos1, pos2) + 1, len(planets)))
        if planets[i] not in (planet1, planet2)
    ]

    return tuple(result)