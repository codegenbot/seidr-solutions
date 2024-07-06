def eat(number, need, remaining):
    total_eaten = number + need
    if total_eaten > remaining:
        return [need, remaining - need]
    else:
        return [total_eaten, 0]