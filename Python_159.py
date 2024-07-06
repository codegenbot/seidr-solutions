
def eat(number, need, remaining):
        return [number + min(need, remaining), max(remaining - need, 0)]
