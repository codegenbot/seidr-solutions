def eat(number, need, remaining):
    total_eaten = number + (
        need - (remaining - need) if remaining >= need else remaining
    )
    return [total_eaten, remaining - need] if total_eaten <= 1000 else [1001, 0]