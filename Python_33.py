def sort_third(l: list):
    threes = [i for i in l if i % 3 == 0]
    three_or_default = sorted(threes)[0] if threes else -1
    return [i if i % 3 != 0 else three_or_default for i in l]