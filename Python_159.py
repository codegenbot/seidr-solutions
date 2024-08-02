def eat(number, need, remaining):
    total_eaten = number + max(0, need - (remaining - (need - number)))
    left_over = min(max(0, remaining - (need - number)), 1000)
    return [total_eaten, left_over]