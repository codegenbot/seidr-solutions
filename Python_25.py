```
def calculate_distance(lat1: float, lon1: float, lat2: float, lon2: float) -> float:
    R = 6373.0
    dLat = math.radians(lat2 - lat1)
    dLon = math.radians(lon2 - lon1)
    lat1 = math.radians(lat1)
    lat2 = math.radians(lat2)

    a = math.sin(dLat/2)*math.sin(dLat/2) +  math.cos(lat1)*math.cos(lat2)*math.sin(dLon/2)*math.sin(dLon/2)
    c = 2*math.atan2(math.sqrt(a), math.sqrt(1-a))
    d = R * c
    return d