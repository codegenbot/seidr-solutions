def find_pair():
    n = int(input())
    pair_sum = int(input())
    num_list = [int(x) for x in input().split()]
    for i in range(len(num_list)):
        for j in range(i + 1, len(num_list)):
            if num_list[i] + num_list[j] == pair_sum:
                return str(num_list[i]) + "\n" + str(num_list[j])
    return "No such pair found"


print(find_pair())