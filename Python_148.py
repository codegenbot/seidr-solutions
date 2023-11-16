def bf(planet1, planet2):
    """
    There are eight planets in our solar system: the closerst to the Sun
    is Mercury, the next one is Venus, then Earth, Mars, Jupiter, Saturn,
    Uranus, Neptune.
    Write a function that takes two planet names as strings planet1 and planet2.
    The function should return a tuple containing all planets whose orbits are
    located between the orbit of planet1 and the orbit of planet2, sorted by
    the proximity to the sun.
    The function should return an empty tuple if planet1 or planet2
    are not correct planet names.
    Examples
    bf("Jupiter", "Neptune") ==> ("Saturn", "Uranus")
    bf("Earth", "Mercury") ==> ("Venus")
    bf("Mercury", "Uranus") ==> ("Venus", "Earth", "Mars", "Jupiter", "Saturn")
    """

    planets = {
        'Mercury': 0,
        'Venus': 1,
        'Earth': 2,
        'Mars': 3,
        'Jupiter': 4,
        'Saturn': 5,
        'Uranus': 6,
        'Neptune': 7
    }

    orbit1 = planets.get(planet1)
    orbit2 = planets.get(planet2)

    if orbit1 is None or orbit2 is None:
        return ()

    if orbit1 > orbit2:
        return tuple(planets.keys())[orbit2 + 1:orbit1]
    else:
        return tuple(planets.keys())[orbit1 + 1:orbit2]


if __name__ == '__main__':
    print(bf("Jupiter", "Neptune"))
    print(bf("Earth", "Mercury"))
    print(bf("Mercury", "Uranus"))
    print(bf("Jupiter", "Earth"))
    print(bf("Mercury", "Pluto"))
    print(bf("Pluto", "Mercury"))
