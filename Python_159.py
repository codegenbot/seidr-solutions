def eat(number, need, remaining):
    total_eaten = number + max(0, need - (remaining - need))
    return [total_eaten, remaining - total_eaten]