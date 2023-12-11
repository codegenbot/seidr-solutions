
def eat(number, remaining):
    need = number + remaining
    total_eaten = need
    carrots_left = max(0, remaining - need)
    return [total_eaten], [carrots_left]