Here is the completed code:

def eat(number, need, remaining):
    total = number + need - remaining if remaining >= need else number + remaining
    return [total, abs(remaining - need) if remaining >= need else 0]