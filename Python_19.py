numbers = input("Enter numbers separated by spaces: ") 
sorted([num_dict[num] if num in num_dict else int(num) for num in numbers.split()])