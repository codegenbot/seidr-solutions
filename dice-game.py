n = int(input())
m = int(input())

count = 0
total_outcomes = n * m

for i in range(1, n+1):
    count += (i-1)*m

probability = count / total_outcomes
print(probability)