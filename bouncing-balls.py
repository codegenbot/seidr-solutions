h0, h, n = map(float, input().split())
bounciness_index = h / h0
total_distance = h0 + 2 * h0 * sum(bounciness_index**i for i in range(n))
print(total_distance)