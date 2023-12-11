def eat(number, remaining, need):
    total_eaten = number + need
    carrots_left = max(0, remaining - total_eaten)
    return [total_eaten], [carrots_left]