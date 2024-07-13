n, m = int(input()), int(input())
print('%.2f'%(sum((n-i)/n for i in range(n) for j in range(m))/n))