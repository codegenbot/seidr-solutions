
def eat(number, need, remaining):
    total_eaten = number + need
    carrots_left = max(remaining - need, 0)
    return [carrots_left]