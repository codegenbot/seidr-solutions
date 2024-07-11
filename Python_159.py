def eat(number, need, remaining):
    total_eaten = number + (remaining if remaining >= need - number else need - number)
    return [total_eaten, remaining - (need - number) if total_eaten < need else 0]