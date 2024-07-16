n = int(input("Enter the number of elements: "))
xs = [int(input("Enter element: ")) for _ in range(n)]
xs.sort()
print(*xs)