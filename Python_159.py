def eat(number, need, remaining):
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]


assert eat(4, 5, 1) == [
    5,
    0,
], "Function did not return correct output for input: (4, 5, 1)"