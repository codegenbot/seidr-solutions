```
def fruit_distribution(s, n):
    s = s.replace("apples and ", "").replace("oranges and ", "")
    total_apples = 0
    if 'apples' in s:
        start_index = s.index('apples')
        end_index = start_index + len('apples')
        total_apples = int(s[:start_index].split()[-1]) - 1

    total_oranges = 0
    if 'oranges' in s:
        start_index = s.index('oranges')
        end_index = start_index + len('oranges')
        total_oranges = int(s[end_index:].split()[0]) - 1

    return n - total_apples - total_oranges