def eat(number, need, remaining):
    total_eaten = number + max(0, need - (remaining - number))
    return [total_eaten, min(total_eaten, need) - total_eaten]