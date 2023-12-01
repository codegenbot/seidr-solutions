def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    scaled_numbers = []
    for num in numbers:
        scaled_num = (num - min_num) / (max_num - min_num)
        scaled_numbers.append(scaled_num)
    return scaled_numbers