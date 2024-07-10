def find_average(numbers):
    min_val = min(numbers)
    max_val = max(numbers)
    if (max_val - min_val) == 0:
        return ["0.0"] * len(numbers)
    return [(str(num) + ".0") for num in numbers]