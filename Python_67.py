```
def fruit_distribution(s,n):
    s = s.lower()
    start = s.find('apples') + len('apples')
    end = s.find(' and ',start)
    apples = int(s[start:end].strip())
    
    start = s.find('oranges') + len('oranges')
    end = s.find(' and ',start)
    oranges = int(s[start:end].strip())
    
    return n - apples - oranges