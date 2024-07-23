def eat(number, need, remaining):
    total_eaten = number + max(need - (remaining - need), 0)
    return [total_eaten, remaining - need if total_eaten < need else 0]