def find_max_min():
    lst = input("Enter numbers separated by space: ").split()
    try:
        nums = [float(num) for num in lst]
        if not nums:
            return None, None
        max_num = min_num = nums[0]
        for num in nums:
            if num > max_num:
                max_num = num
            elif num < min_num:
                min_num = num
        return max_num, min_num
    except ValueError:
        print("Invalid input. Please enter numbers only.")
        return None, None

print(find_max_min())