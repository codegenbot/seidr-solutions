def count_uppercase():
    s = input()
    print(sum(1 for c in s if c.isupper()))