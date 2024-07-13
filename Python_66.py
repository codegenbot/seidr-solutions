s = input(); def digitSum(): 
    return sum(sum(int(c) for c in word if c.isdigit()) 
               for word in s.split() if any(c.isdigit() for c in word)) or 0