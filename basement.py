```
def basement(input_vector):
    total_sum = 0
    seen_negative_sum = False
    for i, num in enumerate(input_vector):
        total_sum += num
        if not seen_negative_sum and total_sum < 0:
            seen_negative_sum = True
        elif seen_negative_sum and total_sum >= 0:
            break
    return i if seen_negative_sum else -1