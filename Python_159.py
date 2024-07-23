def eat(number, need, remaining):
    total_eaten = number + min(need, remaining)
    return [total_eaten, max(0, remaining - total_eaten)]