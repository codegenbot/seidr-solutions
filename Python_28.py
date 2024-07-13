def find_max_min_average(numbers: List[int]) -> str:
    if not numbers:
        return "Input list is empty"
    max_num = max(numbers)
    min_num = min(numbers)
    average = sum(numbers) / len(numbers)
    return f"Max: {max_num}, Min: {min_num}, Average: {average}"