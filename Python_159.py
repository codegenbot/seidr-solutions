def eat(number, need, remaining):
    eaten = number + (need - remaining) if remaining >= need else need
    return [eaten, remaining - (need - eaten)]