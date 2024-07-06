def eat(number, need, remaining):
    if need < 0:
        return "Error: Negative value for need"
    total = number + need
    left = max(remaining - need, 0)
    return [total, left]