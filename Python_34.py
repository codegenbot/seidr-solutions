```
def unique(user_input):
    l = list(map(int, user_input.split(',')))
    return sorted(set(l))