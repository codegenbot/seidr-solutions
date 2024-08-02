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
    index1 = -1
    index2 = -1

    for i in range(len(planets)):
        if planets[i] == planet1:
            index1 = i
        elif planets[i] == planet2:
            index2 = i

    if index1 == -1 or index2 == -1:
        return ()

    start_index = max(0, min(index1, index2))
    end_index = min(len(planets), max(index1, index2) + 1)

    result = tuple(
        sorted(
            [
                planet
                for planet in planets[start_index:end_index]
                if planet != planet1 and planet != planet2
            ]
        )
    )

    return result