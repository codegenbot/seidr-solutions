def sorted_list_sum(nums=None):
    if nums is None:
        nums = [int(input("Enter a number (or 'q' to quit): ")) for _ in range(5)]
    nums = sorted(nums)
    while True:
        num_input = input("Enter a number (or 'q' to quit): ")
        if int(num_input) == nums[-1]:
            return sum(nums)
        elif num_input == 'q':
            return 0