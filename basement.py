def basement(vector):
    total = 0
    has_been_negative = False
    for i, num in enumerate(vector):
        total += num
        if not has_been_negative and total < 0:
            has_been_negative = True
        elif has_been_negative and total >= 0:
            return -1
        if has_been_negative and total < 0:
            return i + 1
    return -1