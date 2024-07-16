def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted((abs(num - min(numbers)), num) for num in numbers)[1][::-1])