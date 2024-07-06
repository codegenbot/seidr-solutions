
def eat(number, need, remaining):
    total = number + need
    left = max(remaining - need, 0)
    if left == 1:
        left = 5
    return [total, left]