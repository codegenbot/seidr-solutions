Here is the completed code:

n = int(input())
m = int(input())

peter_wins = sum(1 for i in range(m+1) for j in range(i+1, n+1)) / (n*m)

print(f"{peter_wins:.4f}")