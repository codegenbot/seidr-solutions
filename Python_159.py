```
def eat(number, need, remaining):
    if number > need:
        return [need, remaining - need]
    else:
        return [number, remaining - number]