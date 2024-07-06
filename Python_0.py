numbers_str = input("Enter space-separated numbers: ")
threshold = float(input("Enter a number to determine close elements: "))
print("Close elements found" if has_close_elements() else "No close elements found")