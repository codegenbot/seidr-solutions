h0 = float(input())
hf1 = float(input())
bounciness_index = hf1 / h0

num_bounces = int(input())

distance = 0
for _ in range(num_bounces):
    distance += 2 * (hf1 - h0) + h0
    h0, hf1 = hf1, hf1 * bounciness_index

print("%.3f" % (2 * (hf1 - h0) + h0))