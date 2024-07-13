def fruit_distribution(s,n):
    s = s.replace('apples', '0').replace('oranges', '1').replace('mango', '2')
    return n - int(s.split()[0].replace('and','')) - int(s.split()[2].replace('oranges,',''))