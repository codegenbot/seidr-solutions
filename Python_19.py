numbers = input("Enter numbers: ")
num_dict = {1: "one", 2: "two"}
sorted([num_dict[int(x)] if int(x) in num_dict else x for x in numbers.split()])