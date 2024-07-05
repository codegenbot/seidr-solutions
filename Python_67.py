```
def fruit_distribution(s, n):
    words = s.split()
    num_apples = int(words[1].split(' ')[0])
    num_oranges = int(words[-2].split(' ')[0])
    return n - num_apples - num_oranges