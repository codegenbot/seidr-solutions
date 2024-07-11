def eat(number, need, remaining):
    total_eaten = min(need, number + number)
    leftover = max(0, remaining - number - (total_eaten - need))
    return [total_eaten, leftover]