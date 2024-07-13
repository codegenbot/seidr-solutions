```
def remove_duplicates(numbers):
    seen = set()
    unique_numbers = [num for num in numbers if not (num in seen or seen.add(num))]
    return unique_numbers[::-1]