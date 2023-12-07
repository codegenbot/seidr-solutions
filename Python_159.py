
def eat(number, need, remaining):
    if remaining <= 0:
        return (0, 0)
    else:
        return (need, remaining - need)