def eat(number, need, remaining):
    return [(number + need - remaining) if (number + need - remaining) > 0 else (number + remaining), min(need, remaining)]