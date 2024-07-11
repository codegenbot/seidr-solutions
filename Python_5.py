def complete_code(numbers, delimiter):
    return [num for num in numbers] + [delimiter] * (len(numbers) - 1) if numbers else []