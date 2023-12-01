def eat(number, need, remaining):
    total_eaten = number + min(need, remaining)
    remaining_carrots = max(0, remaining - need)
    return [total_eaten, remaining_carrots]