def find_pair(n):
    num_list = [int(x) for x in input().split()]
    target_sum = int(input())

    for i in range(len(num_list)):
        for j in range(i + 1, len(num_list)):
            if num_list[i] + num_list[j] == target_sum:
                return f"{num_list[i]} {num_list[j]}"