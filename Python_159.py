
[PYTHON]
def eat(number, need, remaining):
    total = number + need
    hunger = max(total - remaining, 0)
    return [total, remaining - hunger]
[/PYTHON]