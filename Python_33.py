def sort_third(l: list):
    print(sorted(l, key=lambda x: (x % 3, x)))