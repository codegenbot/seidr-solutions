def eat(number, need, remaining):
    return [(number + (remaining if remaining >= need - number else need - number)), 
            max(0, remaining - (need - number) if remaining >= need - number else 0)]