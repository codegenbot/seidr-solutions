Here is the completed code:

def eat(number, need, remaining):
    return [number + max(need - (remaining - number), 0), min(remaining, need - number)]