```
def find_max_min():
    n = int(input("Enter the number of elements: "))
    min_val = float('inf')
    max_val = float('-inf')
    
    for _ in range(n):
        num = float(input(f"Enter element {i+1}: "))
        if num < min_val:
            min_val = num
        elif num > max_val:
            max_val = num
    
    return min_val, max_val

min_val, max_val = find_max_min()
print("Minimum value is", min_val)
print("Maximum value is", max_val)