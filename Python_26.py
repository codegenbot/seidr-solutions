from collections import Counter
    count = Counter(numbers)
    return [num for num in numbers if count[num] == 1]