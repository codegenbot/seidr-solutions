n = int(input())
m = int(input())
print("{:.2f}".format((n-1)/n if n > m else 1/2 if n == m else 1-(m-1)/m))