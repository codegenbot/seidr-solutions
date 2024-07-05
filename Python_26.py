counts = {}
    for number in numbers:
        counts[number] = counts.get(number, 0) + 1
    return [number for number in numbers if counts[number] == 1]