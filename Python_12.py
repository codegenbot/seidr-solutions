str_list = [input("Enter the first string: ") for _ in range(2)]
print(max(str_list, key=len))