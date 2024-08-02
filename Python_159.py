def eat(number, need, remaining):
    total = number + (need - remaining) if remaining >= need else number + remaining
    return [total, 1000 - total] if total <= 1000 else [1100, 0]