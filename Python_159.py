def eat(number, need, remaining):
    total_eaten = number + need
    if remaining <= 0:
        return [total_eaten, 0]
    else:
        carrots_left = max(0, remaining - need)
        return [total_eaten, carrots_left]