def unique(user_input):
    l = list(map(int, ','.join(str(i) for i in user_input).split(',')))
    return sorted(list(set(l)))