from collections import Counter
    counts = Counter(numbers)
    return [num for num in numbers if counts[num] == 1]