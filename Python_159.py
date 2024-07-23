def eat(number, need, remaining):
    total_eaten = min(number + max(need - (remaining - number), 0), remaining)
    return [total_eaten, remaining - total_eaten]