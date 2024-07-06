
def bf(planet1, planet2):
    planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
    
    if planet1 not in planets or planet2 not in planets:
        return ()
    
    pos1 = planets.index(planet1)
    pos2 = planets.index(planet2)
    
    if pos1 > pos2:
        pos1, pos2 = pos2, pos1
        
    return tuple(planets[pos1+1:pos2])