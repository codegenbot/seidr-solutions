```
def sort_third(l):
    ones = [i for i in l if i % 3 != 0]
    zeros = [i for i in l if i % 3 == 0 and min(zeros)]
    return [x if x % 3 != 0 else min(zeros) for x in l]