def calculate_average_age(ages):
    if not ages:
        raise ValueError("Ages list is required")
    return sum(ages) / len(ages)