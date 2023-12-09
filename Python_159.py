
def eat(number, need, remaining):
    if number <= 0:
        left = abs(need)
        return [total, left]
    
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]