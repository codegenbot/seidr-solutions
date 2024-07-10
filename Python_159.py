```
def eat(number, need, remaining):
    need_taken = min(number, need)
    remaining -= need_taken
    if need > number:
        return [0, remaining]
    else:
        return [need_taken, remaining]