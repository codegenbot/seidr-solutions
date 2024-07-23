def eat(number, need, remaining):
    total_eaten = number + (need - remaining) if remaining >= need else number
    return [total_eaten, min(remaining, need) - total_eaten]