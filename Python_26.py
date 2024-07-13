def remove_duplicates(numbers):
    seen = set()
    return [num for num in numbers if num not in seen and not seen.add(num)][::-1]