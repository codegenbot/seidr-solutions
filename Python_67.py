Here is the completed code:

def fruit_distribution(s,n):
    s = s.replace('apples', '').replace('oranges', '').replace('and', '')
    return n - int(s[:-8].split()[1]) - int(s[-7:-3])