```
def fruit_distribution(s,n):
    words = s.split()
    n_apples = int(''.join(filter(str.isdigit, [word for word in words if word.endswith('apples')])))-1
    n_oranges = int(''.join(filter(str.isdigit, [word for word in words if word.endswith('oranges')])))-1
    return n - n_apples - n_oranges