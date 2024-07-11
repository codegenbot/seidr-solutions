def eat(number, need, remaining):
    total = number + need - remaining if need > remaining else need
    return [total, abs(need - remaining)]