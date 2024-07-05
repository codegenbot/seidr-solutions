counts = {}
    for num in numbers:
        counts[num] = counts.get(num, 0) + 1
    return [num for num in numbers if counts[num] == 1]