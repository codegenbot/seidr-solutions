def rolling_max(numbers: List[int]) -> List[int]:
    max_list = []
    current_max = numbers[0]
    for num in numbers:
        if num > current_max:
            current_max = num
        max_list.append(current_max)
    return max_list