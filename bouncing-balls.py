h0 = float(input())
hf = float(input())
n = int(input())

bi = hf / h0

total_distance = 2 * (1 - math.pow(bi, n)) * h0
print("%.3f" % total_distance)