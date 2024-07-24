```
def sorted_list_sum(input_data):
    try:
        nums = [int(num) for num in input_data.split() if num.isdigit()]
    except ValueError:
        print("Invalid input. Please enter a valid integer or digits separated by spaces.")
        return -1

    while True:
        target = input("Enter a number (or 'q' to quit): ")
        if target == 'q':
            return 0
        try:
            target_num = int(target)
            if target_num < min(nums):
                return sum(nums)
            elif target_num > max(nums):
                return 0
            else:
                return sum(num for num in nums if num <= target_num)
        except ValueError:
            print("Invalid input. Please enter a number.")