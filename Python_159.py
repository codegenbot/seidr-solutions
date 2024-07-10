def eat(number, need, remaining):
    need_taken = min(number, need)
    remaining -= need_taken
    return [need_taken, remaining]