```
def eat(number, need, remaining):
    if number < need:
        return [0, remaining]
    need_taken = min(number, need)
    remaining -= need_taken
    return [need_taken, remaining]