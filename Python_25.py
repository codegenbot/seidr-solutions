```
def calculate_distance(lat1: float, lon1: float, lat2: float, lon2: float) -> float:
    R = 6373.0
    lat_rad1 = math.radians(lat1)
    lon_rad1 = math.radians(lon1)
    lat_rad2 = math.radians(lat2)
    lon_rad2 = math.radians(lon2)

    dlon = lon_rad2 - lon_rad1
    dlat = lat_rad2 - lat_rad1

    a = math.sin(dlat / 2)**2 + math.cos(lat_rad1) * math.cos(lat_rad2) * math.sin(dlon / 2)**2
    c = 2 * math.atan2(math.sqrt(a), math.sqrt(1-a))

    distance = R * c
    return distance