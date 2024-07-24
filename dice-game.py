n = int(input())
m = int(input())
print('{:.2f}'.format(sum([(n - i) / n for i in range(n)]) / n)