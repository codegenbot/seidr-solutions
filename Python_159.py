
def eat(number, need, remaining):
    total = number + need
    if need <= remaining:
        left = max(remaining - need, 0)
    else:
        left = 0
    # Check if need is greater than remaining and adjust the result accordingly
    if need > remaining:
        return [total, 1]
    return [total, left]