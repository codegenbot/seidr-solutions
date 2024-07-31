def eat(number, need, remaining):
    total_eaten = number + (need - remaining) if remaining >= need else need
    return [total_eaten, remaining - (need - total_eaten)]