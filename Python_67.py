```
def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    words = s.split()
    if len(words) >= 3:  
        apples = int("".join(filter(str.isdigit, words[:-2])).split()[1])
    else:
        apples = 0
    oranges = n - apples
    return oranges