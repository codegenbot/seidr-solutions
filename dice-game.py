n = int(input())
m = int(input())
print(round(sum([(n-i)/n for i in range(n) for j in range(m) if i < j])/(n*m), 2)