Here is the completed code:

n = int(input())
m = int(input())

total_outcomes = n * m
peter_wins = min(n, m) - 1 + max(n, m)

probability = peter_wins / total_outcomes

print(f"{probability:.4f}")