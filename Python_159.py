
def eat(number, need):
    total_needed = number + need
    if remaining >= total_needed:
        return [total_needed, 0]
    else:
        return [number + remaining, total_needed - remaining]
