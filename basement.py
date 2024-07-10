```
def basement(input_vector):
    seen_negative = False
    total_sum = 0
    for i, num in enumerate(input_vector):
        total_sum += num
        if total_sum < 0:
            seen_negative = True
        elif seen_negative:
            return i
    return -1