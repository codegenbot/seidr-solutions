def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count

n = int(input("Enter the number of elements: "))
numbers = [int(input(f"Enter number {i+1}: ")) for i in range(n)]
threshold = int(input("Enter the threshold value: "))

output = check_numbers(numbers, threshold)
print(output)