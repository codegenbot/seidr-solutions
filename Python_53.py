def calculate_distance(city1: str, city2: str):
    cities = {
        "New York": [40.7128, -74.0060],
        "Los Angeles": [34.0522, -118.2437],
        "Chicago": [41.8781, -87.6298],
        "Houston": [29.7633, -95.3632],
    }

    if city1 not in cities or city2 not in cities:
        return "Error: Please enter valid cities"

    lat1, lon1 = cities[city1]
    lat2, lon2 = cities[city2]

    radius = 6371

    dlat = math.radians(lat2 - lat1)
    dlon = math.radians(lon2 - lon1)

    a = math.sin(dlat / 2) * math.sin(dlat / 2) + math.cos(
        math.radians(lat1)
    ) * math.cos(math.radians(lat2)) * math.sin(dlon / 2) * math.sin(dlon / 2)

    c = 2 * math.atan2(math.sqrt(a), math.sqrt(1 - a))

    distance = radius * c

    return f"The distance between {city1} and {city2} is {distance:.2f} kilometers"