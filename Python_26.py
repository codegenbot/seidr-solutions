from collections import Counter

def get_unique_numbers(numbers):
    count = Counter(numbers)
    return [num for num in numbers if count[num] == 1]