
def eat(total_items, remaining):
    need = total_items - remaining
    if need <= remaining:
        left = max(remaining - need, 0)
        return [total_items + need, left]
    else:
        return [total_items + need, 0]