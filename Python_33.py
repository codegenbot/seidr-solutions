```
def sort_third(l: list):
    return [sorted([x for x in l if (i+1)%3==0])[::-1][0] if i%3==0 else x for i, x in enumerate(l)]