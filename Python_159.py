def eat(number, need, remaining):
    eaten = number + (need - (remaining - need) if remaining >= need else 0)
    return [eaten, max(0, remaining - (need - eaten))]