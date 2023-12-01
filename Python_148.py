def bf(planet1, planet2):
    planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
    if planet1 in planets and planet2 in planets:
        start = planets.index(planet1)
        end = planets.index(planet2)
        if start < end:
            return tuple(planets[start+1:end])
        else:
            return tuple(planets[end+1:start])
    else:
        return ()