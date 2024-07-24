def fruit_distribution(s,n):
    s = s.replace('apples', ' ').replace('oranges', ' ')
    return n - int(s.split()[0].strip()) - int(s.split()[3].strip())