def sort_third(l: list):
    remainder = len(l) % 3
    if remainder:
        l[-remainder:] = sorted(l[-remainder:], reverse=True)
  
    for i in range(2, len(l) - remainder, 3):
        l[i-2:i+1] = sorted(l[i-2:i+1], reverse=True)
        
    return l