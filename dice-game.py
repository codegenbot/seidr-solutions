n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
else:
    print(round((n-1)/(n*m-1), 2))