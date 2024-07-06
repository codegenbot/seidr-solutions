```
def sort_third(l: list):
    return [list(i) for i in zip(*[l[i:i+3] for l in [[i%3,i] for i in l][::-1]])]