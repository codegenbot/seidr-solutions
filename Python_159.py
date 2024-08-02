def eat(number, need, remaining):
    total = number + (need if remaining >= need else remaining)
    return [total, max(0, remaining - (need if remaining >= need else remaining))]