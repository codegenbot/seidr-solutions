```
def eat(number, need, remaining):
    eaten = min(number, need)
    remaining -= eaten
    number -= eaten
    if number < 0:
        return [need - need_taken, remaining]
    else:
        return [eaten, remaining]