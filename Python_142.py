```
n = int(input("How many numbers do you want to sum? "))
numbers = [int(input(f"Enter number {i+1}: ")) for i in range(n)]
print(sum_squares(numbers))

def sum_squares(lst):
    total = sum(num ** len(str(num)) for num in lst)
    return total