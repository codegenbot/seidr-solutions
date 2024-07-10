def solve(N):
    total = 0
    for i in range(1, N+1):
        if i % 2:  
            total += 1
    return bin(total)[2:]