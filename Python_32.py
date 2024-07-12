def find_zero():
    a = float(input())
    while a == 0.0:
        a = float(input())
        
    b = float(input())
    return -b / a

result = find_zero()
print(result)