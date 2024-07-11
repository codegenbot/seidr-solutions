Here is the completed code:

def eat(number, need, remaining):
    total_eaten = number + max(need - (remaining - number), 0)
    return [total_eaten, min(remaining, need - total_eaten)]