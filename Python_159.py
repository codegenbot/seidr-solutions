def eat(number, need, remaining):
    total_eaten = number + (need - (remaining - need) if remaining >= need else 0)
    return [total_eaten, remaining - total_eaten]