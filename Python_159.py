def eat(number, need, remaining):
    total = number + max(need - (remaining - number), 0)
    return [total, min(total - number, remaining)]