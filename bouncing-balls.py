h0 = float(input())
hf1 = float(input())
n = int(input())

bounciness_index = hf1 / h0

total_distance = 2 * (1 + bounciness_index) ** n - 2
print(total_distance)