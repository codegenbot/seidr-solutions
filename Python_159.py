
def eat(number, need, remaining):
    if remaining <= 0 or need >= remaining:
        return [total, left]
    
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]