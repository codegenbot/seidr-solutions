```
def fruit_distribution(s,n):
    words = s.split()
    count_apples = 0
    for word in words:
        if 'apples' in word.lower():
            count_apples = int(''.join(filter(str.isdigit, word)))
            break
    return n - count_apples