def rescale_to_unit(numbers: list[float]) -> list[float]:
    if not all(isinstance(x, (int, float)) for x in numbers):
        unique_numbers = list(set(map(str, numbers)))
        return [float(num) / max(map(float, unique_numbers)) for num in unique_numbers]
    elif len(numbers) == 0:
        return []
    else:
        min_val = min(numbers)
        max_val = max(numbers)
        if max_val - min_val == 0:
            return ["All values are equal, cannot rescale"]
        return [(x - min_val) / (max_val - min_val) for x in numbers]