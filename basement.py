def find_negative_index(vector):
    index = -1
    total = 0
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            index = i + 1
            break
    return index if index != -1 else -1