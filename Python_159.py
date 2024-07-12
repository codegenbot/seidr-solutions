def eat(number, need, remaining):
    total_eaten = min(need, remaining) + number
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]