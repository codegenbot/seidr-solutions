```
def sort_third(l: list):
    first = [i for i in l if i % 3 != 0]
    second = [[y[-1] for y in [l[i:i+int(len(l)/3)+1] if i%3==0]][0] if any(i%3==0 for i in range(0, len(l), 3)) else []
    return sorted(first) + [second]