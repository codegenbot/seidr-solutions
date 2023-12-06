
def eat(number, need, remaining):
    total_eaten = number + need
    if remaining <= 0:
        carrots_left = 0
    else:
        carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]