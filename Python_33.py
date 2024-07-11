def sort_third(l):
    ones = [i for i in l if i % 3 != 0]
    zeros = sorted([i for i in l if i % 3 == 0])
    return [x if x % 3 != 0 else zeros[0] for x in l]