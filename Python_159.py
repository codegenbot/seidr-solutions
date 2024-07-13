def eat(number, need, remaining):
    return [number + need - remaining if number + need > remaining else number + need, min(need - (number + need - remaining), remaining)]