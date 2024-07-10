def sort_third(l: list):
    return sorted([i for i in l if i % 3 != 0]) + [[x for x in [y[-1] for y in [l[i:i+int(len(l)/3)+1] if i%3==0]]][0]]