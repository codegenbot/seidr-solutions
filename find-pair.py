def find_pair(n):
    t = int(input())
    num_list = list(map(int, input().split()))
    for i in range(len(num_list)):
        for j in range(i + 1, len(num_list)):
            if num_list[i] + num_list[j] == t:
                return "\n".join(map(str, [num_list[i], num_list[j]]))