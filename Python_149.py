def sorted_list_sum(input_data):
    nums = sorted([int(num) for num in input_data if num.isdigit()])
    while True:
        try:
            target = int(input("Enter a number (or 'q' to quit): "))
            if target == nums[-1]:
                return sum(nums)
            elif str(target) == 'q':
                return 0
        except ValueError:
            pass