def eat(number, need, remaining):
    total_eaten = number + need
    if remaining >= total_eaten:
        carrots_left = remaining - total_eaten
    else:
        carrots_left = 0
    return [total_eaten, carrots_left]