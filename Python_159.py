def eat(number, need, remaining):
    if remaining < need:
        total_eaten = need
    else:
        total_eaten = number + max(need - (remaining - number), 0)
    return [total_eaten, remaining - total_eaten]