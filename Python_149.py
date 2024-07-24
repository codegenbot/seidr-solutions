def sorted_list_sum(input_data):
    nums = sorted([int(num) for num in input_data if num.isdigit()])
    while True:
        while True:
            target = input("Enter a number (or 'q' to quit): ")
            if target == "q":
                return 0
            try:
                target_num = int(target)
                break
            except ValueError:
                print("Invalid input. Please enter a valid number or 'q' to quit.")
        if target_num == nums[-1]:
            return sum(nums)