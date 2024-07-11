```
def sort_third(l: list):
    zeros = [x for x in l if x % 3 == 0]
    return [i if i % 3 != 0 else min(zeros) for i in l]