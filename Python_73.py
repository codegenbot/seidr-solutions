```
def find_difference(p, q):
    diff_count = 0
    for i in range(len(str(p))):
        if str(p)[i] != str(q)[len(str(q))-i-1]:
            diff_count += 1
    return diff_count