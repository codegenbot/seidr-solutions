```
def solution():
    n = int(input("Enter number of elements: "))
    lst = []
    
    for i in range(n):
        ele = int(input(f"Enter element {i+1}: "))
        lst.append(ele)
        
    return sum(i for i in lst[1::2] if i % 2 != 0)