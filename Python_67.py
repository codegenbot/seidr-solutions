def fruit_distribution(s, n):
    if not s:
        return 0
    
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    
    if "apples" not in s or "oranges" not in s:
        return 0

    apples = int(s[s.index("apples") + len("apples ") :].replace("and", "").replace("apples ", ""))
    oranges = int(s[s.index("oranges") + 7 :].replace("and", "").replace("oranges", ""))
    
    return n - apples - oranges