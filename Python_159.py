def eat(number, need, remaining):
    eaten = number + max(0, need - (remaining - number))
    return [eaten, remaining - eaten]