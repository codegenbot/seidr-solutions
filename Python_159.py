def eat(number, need, remaining):
    if remaining <= 0:
        raise ValueError("Remaining amount must be greater than 0")
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]