```
def fruit_distribution(s,n):
    s = s.lower()
    start = s.index("and") + 3
    apples = int(''.join(filter(str.isdigit, s[:start-1])))
    return n - apples - int(s[start-1].split()[0])