def double_the_difference():
    n = int(input("Enter number of elements: "))
    numbers = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
    return (max(numbers) - min(numbers)) * 2

print(double_the_difference())