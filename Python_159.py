def eat(number, need, remaining):
    total_eaten = number + (remaining if remaining >= need - number else need - number)
    carrots_left = max(0, remaining - (need - number))
    return [total_eaten, carrots_left]