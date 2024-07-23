```
def unique(user_input):
    return sorted(set([int(x) for x in ', '.join(map(str, user_input)).split(',')])))