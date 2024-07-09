```
def sort_third():
    n = int(input("Enter the number of elements: "))
    l = []
    
    for i in range(n):
        x = float(input(f"Enter element {i+1}: "))  
        l.append(x)
        
    return sorted(l)

print(sorted([x for x in sort_third() if x % 3 == 0], reverse=True))