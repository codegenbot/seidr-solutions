n = int(input())
m = int(input())

probability = max((n - m + 1) / n, 0)
print(format(probability, ".8f"))