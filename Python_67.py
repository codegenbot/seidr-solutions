def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    
    parts = s.split()
    apples = 0
    
    for i in range(len(parts) - 2):
        if 'apples' in parts[i] and 'and' in parts[i+1]:
            apples = int(''.join(filter(str.isdigit, parts[i+2])))
            break
            
    oranges = n - apples
    return oranges