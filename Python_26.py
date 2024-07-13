def remove_duplicates(numbers):
    seen = set()
    result = [num for num in numbers if num not in seen and not seen.add(num)]
    return result[::-1]