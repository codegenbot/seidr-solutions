def find_pair(input_list):
    num_dict = {}
    for num in input_list:
        if (target - num) in num_dict:
            return str(target - num) + "\n" + str(num)
        else:
            num_dict[num] = True
    return "No pair found"

target = int(input())
input_size = int(input())
for _ in range(input_size):
    nums = list(map(int, input().split()))
    print(find_pair(nums))