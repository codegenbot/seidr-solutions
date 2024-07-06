def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = [numbers[0]]
    current_max = numbers[0]

    for num in numbers[1:]:
        if num > current_max:
            current_max = num
        max_so_far.append(current_max)

    return max_so_far