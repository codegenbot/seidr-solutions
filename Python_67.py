
def fruit_distribution(s, n):
    import re
    
    apple_count = int(re.search("\d+", s.split("and")[0])[0])
    orange_count = int(re.search("\d+", s.split("and")[1])[0])
    
    mango_count = n - apple_count - orange_count
    
    return mango_count