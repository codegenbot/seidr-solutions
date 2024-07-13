def get_max_min_average(numbers: List[int]) -> str:
    if len(numbers) == 0:
        return "No numbers provided"
    max_num = max(numbers)
    min_num = min(numbers)
    average = sum(numbers) / len(numbers)
    return f"Max: {max_num}, Min: {min_num}, Average: {average}"