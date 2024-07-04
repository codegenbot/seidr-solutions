from collections import Counter

def unique_numbers(numbers):
    count = Counter(numbers)
    return [num for num in numbers if count[num] == 1]