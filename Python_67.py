def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    
    if "apples" not in s:
        apples = 0
    else:
        apples = int(' '.join(s[s.index("apples") + 1 :]).replace("and", "").replace("apples", ""))
        
    if "oranges" not in s:
        oranges = 0
    else:
        oranges = int(' '.join(s[s.index("oranges") + 7 :]).replace("and", "").replace("oranges", ""))
    
    return n - apples - oranges