def leaders(a):
    max_right = a[-1]
    return [max_right] + [x for x in a[:-1] if x >= max_right][::-1]