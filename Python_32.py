def find_zero():
    a, b = map(float, input().split())
    while a == 0.0:
        a, b = map(float, input().split())
        
    return -b / a

result = find_zero()
print(result)