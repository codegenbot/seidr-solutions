h0 = float(input())
h1 = float(input())
bounces = int(input())

bounciness_index = h1 / h0

total_distance = 2 * (h0 + h1) * bounces
total_distance *= (1 - pow(bounciness_index, -bounces)) / (1 - bounciness_index)

print("{:.3f}".format(total_distance))