def eat(number, need, remaining):
    total_eaten = number + (
        need - (remaining - need) if remaining >= need else remaining
    )
    return [total_eaten, remaining - total_eaten]