def sorted_list_sum(input_data):
    nums = sorted([int(num) for num in input_data if num.isdigit()])
    while True:
        try:
            target = str(input("Enter a number (or 'q' to quit): "))
            if target == 'q':
                return 0
            elif int(target) == nums[-1]:
                return sum(nums)
        except ValueError:
            pass