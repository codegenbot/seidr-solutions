def count_upper():
    s = input()
    print(sum(1 for c in s if c.isupper()))