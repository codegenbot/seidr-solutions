def eat(number, need, remaining):
    total_eaten = number + (need if remaining >= need else remaining)
    return [total_eaten, remaining - (need if remaining >= need else 0)]