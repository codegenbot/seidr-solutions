def eat(number, need, remaining):
    total = number + max(need - remaining, 0)
    return [total, min(remaining, need - number)]