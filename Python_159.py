def eat(number, need, remaining):
    total = number + (need - (remaining - need) if remaining >= need else 0)
    return [total, max(0, remaining - need)]