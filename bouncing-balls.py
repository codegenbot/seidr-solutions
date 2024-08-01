h0 = float(input())
h1 = float(input())
bounces = int(input())

bi = h1 / h0

distance = 2 * (h0 + h1) * bi**bounces
print("%.3f" % distance)