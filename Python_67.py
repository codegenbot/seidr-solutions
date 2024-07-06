```
def fruit_distribution(s,n):
    words = s.split()
    apple_count = int(''.join(filter(str.isdigit, [word for word in words if 'apples' in word])) or 0)
    orange_count = n - int(''.join(filter(str.isdigit, [word for word in words if 'oranges' in word])) or 0) - apple_count
    return orange_count