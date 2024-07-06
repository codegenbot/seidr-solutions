```
numbers_str = input("Enter space-separated numbers: ")
threshold = float(input("Enter a single number threshold: "))
numbers = list(map(float, numbers_str.split()))
print("Close elements found" if has_close_elements(numbers) else "No close elements found")