def sort_third(l: list):
    return [value if i % 3 != 0 else sorted([x for x in l if (i - l.index(x)) % 3 != 0])[::-1] 
              for i, value in enumerate(l)]