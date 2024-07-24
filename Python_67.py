```
def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "oranges apples")
    words = s.split()
    apples_and_index = words.index('apples and') if 'apples and' in words else -1
    n -= sum(int(num) for num in filter(str.isdigit, words[:apples_and_index])) + sum(int(num) for num in filter(str.isdigit, words[words.index('oranges'):]))
    return n