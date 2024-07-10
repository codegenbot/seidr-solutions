def total_or_fruit_left(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    
    if 'apples' not in s or 'oranges' not in s:
        return None
    
    apples_count = 0
    oranges_count = 0
    
    for i in s:
        if i == 'apples':
            try:
                apples_count += int(next((j for j in s[s.index(i)+1:] if str.isdigit(j)), ""))
            except StopIteration:
                break
        elif i == 'oranges':
            try:
                oranges_count += int(next((j for j in s[s.index(i)+6:] if str.isdigit(j)), ""))
            except StopIteration:
                break
    
    return n - apples_count - oranges_count