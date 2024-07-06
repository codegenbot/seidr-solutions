def eat(number, need, remaining):
    total = number + (need if remaining >= need else remaining)
    return [total, remaining - (need if remaining >= need else remaining)]