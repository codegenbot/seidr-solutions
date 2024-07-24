def sorted_list_sum():
    nums = sorted([int(input("Enter a number (or 'q' to quit): ")) for _ in range(5)])
    while True:
        if nums[-1] == int(input("Enter a number (or 'q' to quit): ")):
            return sum(nums)
        elif input("Enter a number (or 'q' to quit): ") == 'q':
            return 0