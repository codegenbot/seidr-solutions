def find_closest_elements(numbers: List[float], n: int) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float('inf')
    closest_nums = ()
    for i in range(len(numbers)-1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_nums = (numbers[i], numbers[i+1])
    return closest_nums

# Example usage:
numbers = [1.5, 2.7, 3.8, 4.1, 5.2]
n = 2
result = find_closest_elements(numbers, n)
print(result)