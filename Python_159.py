def eat(number, need, remaining):
    return [(number + need - remaining) if number >= need else (remaining + need), min(need - number, remaining)]