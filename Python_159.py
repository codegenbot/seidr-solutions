
def eat(number, need, remaining):
    total = number + need
    left = max(remaining - (total - number), 0)
    if need <= 0:
        return [total, left]
    else:
        raise ValueError("Invalid input")