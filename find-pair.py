def find_pair():
    pair_sum = int(input())
    num_list = [int(x) for x in input().split()]
    
    seen = {}
    for num in num_list:
        complement = pair_sum - num
        if complement in seen:
            return str(num) + "\n" + str(complement)
        else:
            seen[num] = True
    
    return str(num) + "\n" + str(pair_sum - int(num))