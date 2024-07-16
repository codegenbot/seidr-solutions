def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [3]
    
    tribonacci = [0, 0, 3]
    a, b, c = 0, 0, 3
    
    for i in range(2, n):
        next_num = a + b + c
        tribonacci.append(next_num)
        a, b, c = b, c, next_num
        
    return tribonacci

# test case
assert tri(1) == [0, 0, 3]