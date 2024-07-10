def eat(number, need, remaining):
    need_taken = min(number, need)
    remaining -= need_taken
    if need_taken == number:
        return [0, 0]
    return [need_taken, remaining]