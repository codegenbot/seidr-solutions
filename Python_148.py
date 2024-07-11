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
    if index1 == -1 or index2 := planets.index(planet2) == -1:
        return ()
    planets_between = tuple(
        planets[i] for i in range(max(0, index1), min(len(planets), index2 + 1))
    )
    return planets_between