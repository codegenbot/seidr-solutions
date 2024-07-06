```
numbers_str = input("Enter space-separated numbers: ")
threshold = float(input("Enter a number to determine close elements: "))
numbers = [float(num) for num in numbers_str.split()]
print("Close elements found" if has_close_elements(numbers, threshold) else "No close elements found")