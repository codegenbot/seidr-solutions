def eat(number, need, remaining):
    total_eaten = min(number, need)
    return [total_eaten, remaining - total_eaten]