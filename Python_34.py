```
def unique(user_input):
    l = [int(x) for x in user_input.split(',')]
    return sorted(set(l))