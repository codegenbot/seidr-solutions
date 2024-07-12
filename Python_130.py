```
def tri(n):
    if n == 0:
        return [3]

    tribonacci_sequence = [3]
    
    while len(tribonacci_sequence) <= n:
        if len(tribonacci_sequence) % 2 == 1:
            next_number = tribonacci_sequence[-1] + tribonacci_sequence[-2] + (tribonacci_sequence[-3] if len(tribonacci_sequence) >= 3 else 0)
        else:
            next_number = 1 + len(tribonacci_sequence) / 2
        
        tribonacci_sequence.append(next_number)
    
    return tribonacci_sequence