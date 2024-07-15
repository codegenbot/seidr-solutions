def eat(number, need, remaining):
    total_eaten = number + (need - (remaining - need) if remaining >= need else 0)
    return [total_eaten, max(0, remaining - (need - total_eaten))]