def sorted_list_sum(input_data):
    input_string = ' '.join(map(str, input_data))
    nums = sorted([int(num) for num in input_string.split() if num.isdigit()])
    
    while True:
        target = input("Enter a number (or 'q' to quit): ")
        if target == 'q':
            return sum(nums)
        try:
            target_num = int(target)
            if target_num < nums[0]:
                return sum(nums)
            elif target_num > nums[-1]:
                return 0
            else:
                return sum(num for num in nums if num <= target_num)
        except ValueError:
            print("Invalid input. Please enter a number.")