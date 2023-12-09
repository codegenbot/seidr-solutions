def remove_duplicates(numbers):
    freq = {}
    result = []
    for num in numbers:
        if freq.get(num, 0) == 0:
            result.append(num)
            freq[num] = 1
    return result