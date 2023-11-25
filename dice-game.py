n = int(input())
m = int(input())

# Calculate the probability of Peter rolling strictly higher than Colin
probability = (n-1) / (n + m - 1)

print(probability)