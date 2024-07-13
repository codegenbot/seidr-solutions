def fruit_distribution(s,n):
    if not s:
        return 0
    s = s.replace('apples', '1').replace('oranges', '2')
    parts = s.split()
    if len(parts) == 3: 
        return n - int(parts[0].replace('and', '').strip().split()[0]) - int(parts[-1].replace('oranges', '2').replace('apples', '1').strip())
    else:
        return 0