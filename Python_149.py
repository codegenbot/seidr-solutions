```
def sorted_list_sum(input_data):
    nums = sorted([num for num in [x for x in map(str, input_data) if str(x).isnumeric()] if str(x).isdigit()])
    while True:
        if nums[-1] == int(input("Enter a number (or 'q' to quit): ")):
            return sum(nums)
        elif input("Enter a number (or 'q' to quit): ") == 'q':
            return 0