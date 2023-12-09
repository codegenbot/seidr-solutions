def eat(number, need, remaining):
    total_eaten = number + need
    if total_eaten > remaining:
        carrots_left = 0
    else:
        carrots_left = remaining - total_eaten
    return [total_eaten, carrots_left]