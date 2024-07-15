```
def sum_squares():
    n = int(input("Enter the number of elements: "))
    lst = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
    return sum(i**2 for i in lst)

print(sum_squares())