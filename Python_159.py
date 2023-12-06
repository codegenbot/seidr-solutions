
def eat(number, need, remaining):
    if remaining <= 0:
        return [0]
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]