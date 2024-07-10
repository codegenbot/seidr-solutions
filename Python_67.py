```
def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    if 'apples' not in s or 'oranges' not in s:
        return None
    apples_part = [i for i in s[:s.index('and')] if i in ['apples', 'and']][1:]
    oranges_part = [i for i in s[s.index('and')+4:] if i in ['oranges', 'and']]
    if 'and' not in apples_part:
        apples = int(apples_part[0].replace("apples", ""))
    else:
        apples = int(''.join(filter(str.isdigit, apples_part)))
    if 'and' not in oranges_part:
        oranges = int(oranges_part[0].replace("oranges", ""))
    else:
        oranges = int(''.join(filter(str.isdigit, oranges_part)))
    return n - int(apples) - int(oranges)