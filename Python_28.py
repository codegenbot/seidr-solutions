def sum_odd_numbers(numbers: List[int]) -> int:
    return sum(num for num in numbers if num % 2 != 0)