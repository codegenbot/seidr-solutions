def eat(number, need, remaining):
    to_eat = min(need, remaining)
    total_eaten = number + to_eat
    remaining_carrots = remaining - to_eat
    return [total_eaten, remaining_carrots]