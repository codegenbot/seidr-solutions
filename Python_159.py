def eat(number, need, remaining):
    total_eaten = number + (remaining if remaining >= need - number else need - number)
    return [total_eaten, remaining - total_eaten]