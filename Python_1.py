def find_max_consecutive_sum(numbers: List[int]) -> int:
    max_sum = current_sum = numbers[0]
    for num in numbers[1:]:
        current_sum = max(num, current_sum + num)
        max_sum = max(max_sum, current_sum)
    return max_sum