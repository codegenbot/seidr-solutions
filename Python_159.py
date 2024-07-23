def eat(number, need, remaining):
    total_eaten = min(number, need) if number <= remaining else min(need, remaining)
    return [total_eaten, remaining - total_eaten]