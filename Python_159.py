def eat(carrots):
    total_eaten = carrots + 2
    carrots_left = max(0, carrots - 2)
    return [total_eaten, carrots_left]