```
def fruit_distribution():
    s = input("Enter your sentence: ")
    n = int(input("Enter number of boxes: "))
    pattern = r'(\d+)\s*(apples|oranges)'
    quantities = [int(x[0]) for x in re.findall(pattern, s.lower())]
    apples, oranges = map(sum, zip(*[(x == 'apples') for x in (re.findall(pattern, s.lower()))]))
    
    total_fruit = apples + oranges
    max_per_box = min(total_fruit // (n + 1), n)
    remaining_fruits = total_fruit - (max_per_box * (n + 1))
    
    return (
        int(-(-total_fruit / float(max_per_box)) + 0.5)
        if max_per_box != 0
        else total_fruit
    )