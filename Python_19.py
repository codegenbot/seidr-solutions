numbers = input("Enter numbers: ")
num_dict = {1: "one", 2: "two"}
sorted([num_dict[num] if num in num_dict else int(num) for num in numbers.split()])