def eat(number, need, remaining):
    total = number + (need - remaining) if remaining >= need else need
    return [total, abs(remaining - need)]