n = int(input())
m = int(input())
print(round(sum([(n-i)*(m-i) for i in range(1, n)]) / (n*m), 2)