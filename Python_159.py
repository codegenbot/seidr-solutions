def eat(number, need, remaining):
    total_eaten = number + min(need - number, remaining)
    return [total_eaten, remaining - (total_eaten - number)]