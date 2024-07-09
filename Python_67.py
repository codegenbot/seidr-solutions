```
def fruit_distribution(s,n):
    s = s.lower()
    n = int(n)
    words = s.split()
    count_apples = 0
    for word in words:
        if 'apples' in word:
            count_apples = int(''.join(filter(str.isdigit, word)))
    return n - count_apples