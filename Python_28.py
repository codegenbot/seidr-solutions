def find_max_min_average(numbers: List[int]) -> str:
    if not numbers:
        return 'No numbers provided.'

    max_num = max(numbers)
    min_num = min(numbers)

    average = sum(numbers) / len(numbers)

    return f'Maximum number is {max_num}, Minimum number is {min_num} and Average is {average}'