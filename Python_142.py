```
def sum_squares(lst):
    if not all(isinstance(x, (int, float)) for x in lst):
        return "Error: Input should be a list of numbers"
    
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            total += lst[i]**2
        elif i % 4 == 0:
            total += lst[i]**3
    return total