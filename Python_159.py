def eat(number, need, remaining):
    total = number + need
    left = remaining - (total - number)
    return [total, left]