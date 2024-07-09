```
def fruit_distribution(s, n):
    s = s.lower()
    num_apples = sum(1 for word in s.split() if word == 'apples')
    return n - num_apples