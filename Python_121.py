```
solution = sum(int(i) for i in input("Enter the elements of a list separated by space: ").split()[1::2] if int(i) % 2 != 0)