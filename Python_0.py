numbers_str = input("Enter space-separated numbers: ")
threshold = float(input("Enter a single number threshold: "))
print("Close elements found" if has_close_elements() else "No close elements found")