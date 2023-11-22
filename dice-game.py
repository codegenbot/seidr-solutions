n = int(input())
m = int(input())

def dice_probability(n, m):
    count = 0
    for i in range(1, n+1):
        count += sum(1 for j in range(1, m+1) if j < i)
    return count / (n * m)

probability = dice_probability(n, m)
print(probability)