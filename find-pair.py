def find_pair():
    target = int(input())
    input_list = list(map(int, input().split()))
    num_dict = {}
    for num in input_list:
        if (target - num) in num_dict:
            return str(target - num) + "\n" + str(num)
        else:
            num_dict[target - num] = True
    return "No pair found"


input_size = int(input())
for _ in range(input_size):
    print(find_pair())