def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    
    if not any(word in s for word in ['apples', 'oranges']):
        return None
    
    apples = int(' '.join(s[s.index("apples") + 6:]).replace("and", "").replace("apples ", ""))
    oranges = int(' '.join(s[s.index(" oranges") + 8:]).replace("and", "").replace("oranges ", ""))
    
    if not (isinstance(apples, int) and isinstance(oranges, int)):
        return None
    
    return n - apples - oranges