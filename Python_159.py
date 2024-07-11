def eat(number, need, remaining):
    eaten = number + (
        need - (remaining - (remaining - need)) if remaining >= need else 0
    )
    return [eaten, max(0, remaining - (eaten - number))]