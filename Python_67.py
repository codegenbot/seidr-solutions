```
def fruit_distribution(s, n):
    words = s.split()
    count_apples = 0
    for word in words:
        if 'apples' in word:
            count_apples = int(word.replace('apples and ', '').replace('apples', ''))

    return n - count_apples