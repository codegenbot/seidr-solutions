def eat(number, need, remaining):
    total_eaten = number + (need - (remaining - need))
    return [total_eaten, min(remaining - 1, 0)]