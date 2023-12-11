def eat(number, need, remaining):
    eaten = number + need
    left = remaining - (eaten - number)
    return [eaten, left]