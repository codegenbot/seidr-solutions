```
def fruit_distribution(s, n):
    pattern = r'(\d+)\s*(apples|oranges)'
    quantities = [int(x[0]) for x in re.findall(pattern, s.lower())]
    
    apples, oranges = sum(1 if x == 'apples' else 0 for x in (re.findall(pattern, s.lower()))), len(quantities) - apples
    total_fruit = sum(quantities)
    
    max_per_box = min(total_fruit // n, n)
    remaining_fruits = total_fruit - (max_per_box * n)
    
    return (
        int(-(-total_fruit / float(max_per_box)) + 0.5)
        if max_per_box != 0
        else total_fruit
    )