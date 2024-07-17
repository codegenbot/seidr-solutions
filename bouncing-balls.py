h0 = float(input())
hf = float(input())
n = int(input())

bounciness_index = hf / h0

distance = 2 * (1 - bounciness_index) * (1 - bounciness_index) ** (n - 1)

print(bounciness_index)
print(distance)