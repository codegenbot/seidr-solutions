def eat(number, need, remaining):
    total_eaten = number + max(need - (remaining - number), 0)
    return [total_eaten, remaining - total_eaten]