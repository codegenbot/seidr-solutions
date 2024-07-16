n = int(input("Enter the number of elements: "))
xs = [int(input()) for _ in range(n)]
xs.sort()
print(*xs)