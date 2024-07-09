```Python
def sort_third():
    n = int(input("Enter the number of elements: "))
    l = []
    
    for i in range(n):
        x = int(input(f"Enter element {i+1}: "))
        l.append(x)
        
    return sorted(l, key=lambda x: (x % 3, x))

print(sort_third())