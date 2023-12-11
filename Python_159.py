def eat(number, need, remaining):
    if remaining <= 0:
        return []
    eaten = number + need
    left = remaining - (eaten - number)
    return [eaten, left]
