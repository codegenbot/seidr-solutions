def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float('-inf')
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

# Test the function with given example
print(rolling_max([1, 2, 3, 2, 3, 4, 2]))