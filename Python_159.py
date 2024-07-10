Here is the completed code:

def eat(number, need, remaining):
    return [number + need - remaining if remaining >= need else number + remaining, min(need, remaining)]