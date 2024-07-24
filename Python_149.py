def sorted_list_sum():
    nums = []
    while True:
        target = input("Enter a number (or 'q' to quit): ")
        if target == "q":
            return sum(nums)
        try:
            target_num = int(target)
            nums.append(target_num)
        except ValueError:
            print("Invalid input. Please enter a number.")