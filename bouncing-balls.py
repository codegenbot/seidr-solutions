h0 = float(input())
hf = float(input())
n = int(input())

bounciness_index = hf / h0

total_distance = 2 * (1 - math.pow(bounciness_index, -n)) * h0
print("{:.6f}".format(total_distance))