def sort_third(l: list):
    return [value if i % 3 != 0 else sorted([x for x in l[:i//3*3+(i%3)*3:(i+1)//3*3+(i+1)%3*3:]])[j] 
             for j, value in enumerate(l)]