def sorted_list_sum(input_data):
    input_string = " ".join(map(str, input_data))
    nums = sorted([num for num in input_string.split() if num.isdigit()], key=len)

    return sum(int(num) for num in nums)