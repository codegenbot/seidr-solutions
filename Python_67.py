```
def fruit_distribution(s,n):
    s = s.lower()
    n = int(n)
    start = s.find('and') + 3
    end = s.find('mango')
    apples_and_oranges = int(s[start:end-1].replace(' ', ''))
    return n - apples_and_oranges