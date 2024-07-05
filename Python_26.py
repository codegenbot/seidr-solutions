from collections import Counter

def remove_duplicates(numbers):
    counts = Counter(numbers)
    return [num for num in numbers if counts[num] == 1]