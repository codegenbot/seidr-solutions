def eat(number, need, remaining):
    eaten = min(need, number + (need - (remaining - (number - need)) if remaining < need else 0))
    left_carrots = max(0, min(1000, remaining - (need - eaten)))
    return [eaten, left_carrots]