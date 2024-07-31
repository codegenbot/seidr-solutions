def eat(number, need, remaining):
    total_eaten = number + min(need - (remaining - number), need)
    return [total_eaten, remaining - total_eaten]