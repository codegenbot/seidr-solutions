def eat(number, need, remaining):
    total_eaten = number + (
        need - (remaining - (number - need)) if remaining < need else 0
    )
    left_carrots = max(0, min(1000, remaining - (need - total_eaten)))
    return [total_eaten, left_carrots]