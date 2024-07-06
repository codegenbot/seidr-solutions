```
def fruit_distribution(s,n):
    s = s.lower()
    n = int(n)
    count = 0
    for i in range(1,s.count('and')+1):
        if 'apples' in s[i-5:i+4] and 'oranges' not in s[i-5:i+4]:
            a = int(s[:s.index('apples')].replace(' ',''))
            o = int(s[s.index('and')+3:s.index('oranges')].replace(' ','').replace('and',''))
            count = n - a - o
            break
    return count