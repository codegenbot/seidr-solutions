```
def sort_third(l: list):
    res = [[], [], []]
    for i in l:
        res[i % 3].append(i)
    return [i for sub in res for i in sorted(sub)]