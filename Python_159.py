def eat(number, need, remaining):
    if remaining >= need:
        return [number + need - remaining, min(need, remaining)]
    else:
        return [number + remaining, min(need, remaining)]