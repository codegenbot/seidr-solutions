def calculate_odd_sum(numbers: list) -> int:
    return sum(i for i in numbers if i % 2 != 0)