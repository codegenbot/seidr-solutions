def sorted_list_sum(input_data):
    nums = sorted([int(num) for num in input_data])
    while True:
        if nums[-1] == int(input("Enter a number (or 'q' to quit): ")):
            return sum(nums)
        elif input("Enter a number (or 'q' to quit): ") == 'q':
            return 0