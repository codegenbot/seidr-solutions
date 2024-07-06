def eat(number, need, remaining):
    total_eaten = number + need
    if total_eaten > remaining:
        return [total_eaten, 0]
    else:
        return [total_eaten, remaining - total_eaten]