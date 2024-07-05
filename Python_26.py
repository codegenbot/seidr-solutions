count = {}
    for num in numbers:
        count[num] = count.get(num, 0) + 1
    return [num for num in numbers if count[num] == 1]